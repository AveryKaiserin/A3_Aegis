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
	// NAAF
	UNIFORM_HOLDER(U_Theseus_B_NAAF_Uniform_01_dgtl_F,$STR_A3_Theseus_combat_fatigues_haf0)
	UNIFORM_HOLDER(U_Theseus_B_NAAF_Uniform_02_dgtl_F,$STR_A3_Theseus_combat_fatigues_haf1)
	UNIFORM_HOLDER(U_Theseus_B_NAAF_Officer_dgtl_F,$STR_A3_Theseus_combat_fatigues_haf_tee)
};