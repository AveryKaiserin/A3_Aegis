/*
- Definitions for weapons presets
- Placed in CfgWeaponsAcc
*/

#define LINKED_TOP(accessory) \
    class LinkedItemsOptic \
	{ \
		slot = CowsSlot; \
		item = accessory; \
	};

#define LINKED_SIDE(accessory) \
    class LinkedItemsAcc \
	{ \
		slot = PointerSlot; \
		item = accessory; \
	};

#define LINKED_MUZZLE(accessory) \
    class LinkedItemsMuzzle \
	{ \
		slot = MuzzleSlot; \
		item = accessory; \
	};

#define LINKED_UNDERBARREL(accessory) \
    class LinkedItemsUnder \
	{ \
		slot = UnderBarrelSlot; \
		item = accessory; \
	};