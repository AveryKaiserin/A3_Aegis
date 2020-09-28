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
	class Item_Base_F;
	UNIFORM_HOLDER(Police_U_I_P_PoliceUniform_F,$STR_A3_P_CfgWeapons_Police_U_I_P_PoliceUniform_F0)
	UNIFORM_HOLDER(Police_U_I_P_PoliceUniform_gloves_F,$STR_A3_P_CfgWeapons_Police_U_I_P_PoliceUniform_gloves_F0)
	// Deprecated classes
	DEPRECATED_CLASS(Item_U_I_P_PoliceUniform_F,Item_Police_U_I_P_PoliceUniform_F)
	DEPRECATED_CLASS(Item_U_I_P_PoliceUniform_gloves_F,Item_Police_U_I_P_PoliceUniform_gloves_F)
};