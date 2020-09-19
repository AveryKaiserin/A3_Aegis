#define ITEM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
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
    // Arma 3 Enoch
    // Arma 3 Aegis
	ITEM_HOLDER(ItemSmartPhone,$STR_A3_A_CfgWeapons_ItemSmartPhone0)
};