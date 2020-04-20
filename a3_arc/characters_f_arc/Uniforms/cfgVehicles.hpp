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
	// Uniform holders
	class Item_Base_F;
	// cfgSpetsnaz.hpp
	UNIFORM_HOLDER(U_O_R_Gorka_arctic_F,$STR_A3_A_CfgWeapons_U_O_R_Gorka_arctic_F0)
	UNIFORM_HOLDER(U_O_R_FullGhillie_arc_F,$STR_A3_A_CfgWeapons_U_O_R_FullGhillie_arc_F0)
	// cfgBlufor_Arc.hpp
	UNIFORM_HOLDER(U_B_CombatUniform_arc_f,$STR_A3_A_CfgWeapons_U_B_CombatUniform_arc_f0)
	UNIFORM_HOLDER(U_B_GhillieSuit_arc_f,$STR_A3_A_CfgWeapons_U_B_GhillieSuit_arc_f0)
	UNIFORM_HOLDER(U_B_FullGhillie_arc_f,$STR_A3_A_CfgWeapons_U_B_FullGhillie_arc_f0)
};