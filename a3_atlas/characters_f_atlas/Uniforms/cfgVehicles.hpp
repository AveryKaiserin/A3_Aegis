#define UNIFORM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\dummyweapon.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Arma 3
	class Item_Base_F;
	class Item_U_B_CombatUniform_sgg: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg0;
	};
	class Item_U_B_CombatUniform_sgg_tshirt: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_tshirt0;
	};
	class Item_U_B_CombatUniform_sgg_vest: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_vest0;
	};
	// Arma 3 Atlas
    // Civilians
	UNIFORM_HOLDER(U_C_CommonerJacket_01_black_F,$STR_A3_A_CfgWeapons_U_C_CommonerJacket_01_black_F0)
	UNIFORM_HOLDER(U_C_CommonerJacket_01_blue_F,$STR_A3_A_CfgWeapons_U_C_CommonerJacket_01_blue_F0)
	UNIFORM_HOLDER(U_C_CommonerJacket_01_grey_F,$STR_A3_A_CfgWeapons_U_C_CommonerJacket_01_grey_F0)
	// Viper
	UNIFORM_HOLDER(U_O_V_Soldier_Viper_whex_F,$STR_A3_A_CfgWeapons_U_O_V_Soldier_Viper_whex_F0)
	// CSAT (Woodland)
	UNIFORM_HOLDER(U_O_W_CombatUniform_owcamo,$STR_A3_A_CfgWeapons_U_O_W_CombatUniform_owcamo0)
	UNIFORM_HOLDER(U_O_W_PilotCoveralls,$STR_A3_A_CfgWeapons_U_O_W_PilotCoveralls0)
	UNIFORM_HOLDER(U_O_W_OfficerUniform,$STR_A3_A_CfgWeapons_U_O_W_OfficerUniform0)
	UNIFORM_HOLDER(U_O_officer_noInsignia_whex_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_whex_F0)
	// NATO (German)
	UNIFORM_HOLDER(U_B_E_CombatUniform_wdl,$STR_A3_A_CfgWeapons_U_B_E_CombatUniform_wdl0)
	UNIFORM_HOLDER(U_B_E_CombatUniform_tshirt_wdl,$STR_A3_A_CfgWeapons_U_B_E_CombatUniform_tshirt_wdl0)
	UNIFORM_HOLDER(U_B_E_CombatUniform_vest_wdl,$STR_A3_A_CfgWeapons_U_B_E_CombatUniform_vest_wdl0)
	UNIFORM_HOLDER(U_B_E_HeliPilotCoveralls,$STR_A3_A_CfgWeapons_U_B_E_HeliPilotCoveralls0)
	UNIFORM_HOLDER(U_Tank_wdl_F,$STR_A3_A_CfgWeapons_U_Tank_wdl_F0)
    /*
    // CSAT (Caspian)
	UNIFORM_HOLDER(U_O_CombatUniform_semiarid,$STR_A3_A_CfgWeapons_U_O_CombatUniform_semiarid0)
	UNIFORM_HOLDER(U_O_C_officer_noInsignia_semiarid_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_semiarid0)
	// ADF
	UNIFORM_HOLDER(U_B_O_CombatUniform_aucamo_f,$STR_A3_A_CfgWeapons_U_B_O_CombatUniform_aucamo_f0)
	UNIFORM_HOLDER(U_B_O_CombatUniform_tshirt_aucamo_f,$STR_A3_A_CfgWeapons_U_B_O_CombatUniform_tshirt_aucamo_f0)
	UNIFORM_HOLDER(U_B_O_CombatUniform_vest_aucamo_f,$STR_A3_A_CfgWeapons_U_B_O_CombatUniform_vest_aucamo_f0)
	UNIFORM_HOLDER(U_B_O_PilotCoveralls,$STR_A3_A_CfgWeapons_U_B_O_PilotCoveralls0)
	UNIFORM_HOLDER(U_B_O_Wetsuit,$STR_A3_A_CfgWeapons_U_B_O_Wetsuit0)
	UNIFORM_HOLDER(U_B_O_CBRN_Suit_01_Aucamo_F,$STR_A3_A_CfgWeapons_U_B_O_CBRN_Suit_01_Aucamo_F0)
    */
	// HIMF
	UNIFORM_HOLDER(U_B_H_Soldier_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_F0)
	UNIFORM_HOLDER(U_B_H_Soldier_2_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_2_F0)
	UNIFORM_HOLDER(U_B_H_Soldier_3_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_3_F0)
	UNIFORM_HOLDER(U_B_H_Officer_F,$STR_A3_A_CfgWeapons_U_B_H_Officer_F0)
	UNIFORM_HOLDER(U_B_H_Coveralls_F,$STR_A3_A_CfgWeapons_U_B_H_Coveralls_F0)
	/*
    // CDF
	UNIFORM_HOLDER(U_I_W_Uniform_01_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_F0)
	UNIFORM_HOLDER(U_I_W_Uniform_01_tanktop_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_tanktop_F0)
	UNIFORM_HOLDER(U_I_W_Uniform_01_shortsleeve_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_shortsleeve_F0)
	UNIFORM_HOLDER(U_I_W_Uniform_01_officer_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_officer_F0)
	UNIFORM_HOLDER(U_I_W_Uniform_01_coveralls_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_coveralls_F0)
	UNIFORM_HOLDER(U_I_W_FullGhillie_wdl_F,$STR_A3_A_CfgWeapons_U_I_W_FullGhillie_wdl_F0)
	UNIFORM_HOLDER(U_I_W_CBRN_Suit_01_Autumn_F,$STR_A3_A_CfgWeapons_U_I_W_CBRN_Suit_01_Autumn_F0)
    */
	// IDF
	UNIFORM_HOLDER(U_I_I_CombatUniform_olive,$STR_A3_A_CfgWeapons_U_I_I_CombatUniform_olive0)
	UNIFORM_HOLDER(U_I_I_CombatUniform_shortsleeve_olive,$STR_A3_A_CfgWeapons_U_I_I_CombatUniform_shortsleeve_olive0)
	UNIFORM_HOLDER(U_I_I_GhillieSuit,$STR_A3_A_CfgWeapons_U_I_I_GhillieSuit0)
	UNIFORM_HOLDER(U_I_I_OfficerUniform,$STR_A3_A_CfgWeapons_U_I_I_OfficerUniform0)
	UNIFORM_HOLDER(U_I_I_Wetsuit,$STR_A3_A_CfgWeapons_U_I_I_Wetsuit0)
	UNIFORM_HOLDER(U_Tank_olive_F,$STR_A3_A_CfgWeapons_U_Tank_olive_F0)
	UNIFORM_HOLDER(U_I_I_CBRN_Suit_01_Olive_F,$STR_A3_A_CfgWeapons_U_I_I_CBRN_Suit_01_Olive_F0)
};