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
	// Arma 3 Marine
	// USMC
	UNIFORM_HOLDER(Marine_U_B_MCU_desert_F,$STR_A3_M_CfgWeapons_U_B_MCU_desert_F0)
	UNIFORM_HOLDER(Marine_U_B_MCU_wdl_F,$STR_A3_M_CfgWeapons_U_B_MCU_wdl_F0)
	UNIFORM_HOLDER(Marine_U_B_MCU_tshirt_desert_F,$STR_A3_M_CfgWeapons_U_B_MCU_tshirt_desert_F0)
	UNIFORM_HOLDER(Marine_U_B_MCU_tshirt_wdl_F,$STR_A3_M_CfgWeapons_U_B_MCU_tshirt_wdl_F0)
	UNIFORM_HOLDER(Marine_U_B_MCU_vest_desert_F,$STR_A3_M_CfgWeapons_U_B_MCU_vest_desert_F0)
	UNIFORM_HOLDER(Marine_U_B_MCU_vest_wdl_F,$STR_A3_M_CfgWeapons_U_B_MCU_vest_wdl_F0)
	// Deprecated classes
	COMPATIBILITYCLASS(Item_U_B_MCU_desert_F,Item_Marine_U_B_MCU_desert_F)
	COMPATIBILITYCLASS(Item_U_B_MCU_wdl_F,Item_Marine_U_B_MCU_wdl_F)
	COMPATIBILITYCLASS(Item_U_B_MCU_tshirt_desert_F,Item_Marine_U_B_MCU_tshirt_desert_F)
	COMPATIBILITYCLASS(Item_U_B_MCU_tshirt_wdl_F,Item_Marine_U_B_MCU_tshirt_wdl_F)
	COMPATIBILITYCLASS(Item_U_B_MCU_vest_desert_F,Item_Marine_U_B_MCU_vest_desert_F)
	COMPATIBILITYCLASS(Item_U_B_MCU_vest_wdl_F,Item_Marine_U_B_MCU_vest_wdl_F)
};