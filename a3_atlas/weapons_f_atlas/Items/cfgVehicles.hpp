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
	// Arma 3
	class Item_Base_F;
    // Arma 3 Atlas
	ITEM_HOLDER(I_I_UavTerminal,$STR_A3_A_CfgWeapons_I_I_UavTerminal0,IND_I_F)
};