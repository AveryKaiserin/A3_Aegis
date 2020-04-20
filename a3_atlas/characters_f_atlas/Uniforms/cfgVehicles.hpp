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
	// Arma 3 Atlas
	// HIDF
	UNIFORM_HOLDER(U_B_HIDF_Soldier_F,$STR_A3_A_CfgWeapons_U_B_HIDF_Soldier_F0)
	UNIFORM_HOLDER(U_B_HIDF_Soldier_2_F,$STR_A3_A_CfgWeapons_U_B_HIDF_Soldier_2_F0)
	UNIFORM_HOLDER(U_B_HIDF_Soldier_3_F,$STR_A3_A_CfgWeapons_U_B_HIDF_Soldier_3_F0)
	UNIFORM_HOLDER(U_B_HIDF_Officer_F,$STR_A3_A_CfgWeapons_U_B_HIDF_Officer_F0)
	UNIFORM_HOLDER(U_B_HIDF_Helipilot_F,$STR_A3_A_CfgWeapons_U_B_HIDF_Helipilot_F0)
	// NATO (European)
	UNIFORM_HOLDER(U_B_E_Uniform_01_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_F0)
	UNIFORM_HOLDER(U_B_E_Uniform_01_shortsleeve_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_shortsleeve_F0)
	UNIFORM_HOLDER(U_B_E_Uniform_01_tanktop_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_tanktop_F0)
	UNIFORM_HOLDER(U_B_E_Uniform_01_coveralls_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_coveralls_F0)
	UNIFORM_HOLDER(U_Tank_wdl_F,$STR_A3_A_CfgWeapons_U_Tank_wdl_F0)
	/*
	UNIFORM_HOLDER(U_B_E_Uniform_01_ard_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_ard_F0)
	UNIFORM_HOLDER(U_B_E_Uniform_01_ard_shortsleeve_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_ard_shortsleeve_F0)
	UNIFORM_HOLDER(U_B_E_Uniform_01_ard_tanktop_F,$STR_A3_A_CfgWeapons_U_B_E_Uniform_01_ard_tanktop_F0)
	// ADF
	UNIFORM_HOLDER(U_B_CombatUniform_mcam_aus_f,$STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_aus_f0)
	UNIFORM_HOLDER(U_B_CombatUniform_tshirt_mcam_aus_f,$STR_A3_A_CfgWeapons_U_B_CombatUniform_tshirt_mcam_aus_f0)
	UNIFORM_HOLDER(U_B_CombatUniform_vest_mcam_aus_f,$STR_A3_A_CfgWeapons_U_B_CombatUniform_vest_mcam_aus_f0)
	UNIFORM_HOLDER(U_B_PilotCoveralls_ANZAC,$STR_A3_A_CfgWeapons_U_B_PilotCoveralls_ANZAC0)
	*/
	// IDF
	UNIFORM_HOLDER(U_I_I_Soldier_F,$STR_A3_A_CfgWeapons_U_I_I_Soldier_F0)
	UNIFORM_HOLDER(U_I_I_Soldier_2_F,$STR_A3_A_CfgWeapons_U_I_I_Soldier_2_F0)
	UNIFORM_HOLDER(U_I_I_Officer_F,$STR_A3_A_CfgWeapons_U_I_I_Officer_F0)
	UNIFORM_HOLDER(U_Tank_olive_F,$STR_A3_A_CfgWeapons_U_Tank_olive_F0)
};