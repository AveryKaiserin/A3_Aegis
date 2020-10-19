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
	class Item_B_UavTerminal: Item_Base_F
	{
		displayName = "UAV Terminal [BLUFOR]";
	};
	class Item_O_UavTerminal: Item_Base_F
	{
		displayName = "UAV Terminal [OPFOR]";
	};
	class Item_I_UavTerminal: Item_Base_F
	{
		displayName = "UAV Terminal [Independent]";
	};
    // Arma 3 Aegis
	ITEM_HOLDER(ItemSmartPhone,$STR_A3_A_CfgWeapons_ItemSmartPhone0)
    // Deprecated classes
    DEPRECATED_CLASS(Item_I_E_UavTerminal,Item_Base_F)
    DEPRECATED_CLASS(Item_O_R_UavTerminal,Item_Base_F)
    DEPRECATED_CLASS(Item_B_ION_UavTerminal,Item_Base_F)
};