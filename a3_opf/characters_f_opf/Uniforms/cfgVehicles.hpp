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
	// Arma 3 Opposing Forces
	// Paramilitary
	UNIFORM_HOLDER(U_O_ParamilitaryBody,"Rugged Coveralls")
	// Raven
	UNIFORM_HOLDER(U_O_R_CombatUniform_tshirt_taiga_F,"Fatigues (Taiga, Tee) [Russia]")
	UNIFORM_HOLDER(U_O_R_CombatUniform_tshirt_arid_F,"Fatigues (Arid, Tee) [Russia]")
	// Separatists
	UNIFORM_HOLDER(U_O_E_Gorka_01_autumn_F,"Granit-A Suit")
	UNIFORM_HOLDER(U_O_E_Gorka_01_summer_F,"Granit-S Suit")
	UNIFORM_HOLDER(U_O_E_Uniform_01_taiga_F,"Deserter Clothes (Taiga)")
	// Insurgents
	UNIFORM_HOLDER(U_IG_Guerilla3_3_F,"Guerilla Smocks (Grey)")
	UNIFORM_HOLDER(U_I_T_Uniform_01_hex_F,"Deserter Clothes (Hex)")
	UNIFORM_HOLDER(U_I_T_Uniform_01_urb_F,"Deserter Clothes (Urban)")
	UNIFORM_HOLDER(U_I_T_Uniform_01_ghex_F,"Deserter Clothes (Green Hex)")
	UNIFORM_HOLDER(U_I_T_Uniform_01_tshirt_black_F,"Worn Clothes (Black)")
};