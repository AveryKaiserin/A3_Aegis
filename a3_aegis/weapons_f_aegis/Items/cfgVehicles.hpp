#define ITEM_HOLDER(a,b,c) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		faction = ##c##; \
		author = $STR_A3_A_AveryTheKitty; \
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Item_Base_F;
    // Arma 3 Aegis
	ITEM_HOLDER(B_ION_UavTerminal,$STR_A3_A_CfgWeapons_B_ION_UavTerminal0,BLU_ION_F)
	ITEM_HOLDER(O_R_UavTerminal,$STR_A3_A_CfgWeapons_O_R_UavTerminal0,OPF_R_F)
};