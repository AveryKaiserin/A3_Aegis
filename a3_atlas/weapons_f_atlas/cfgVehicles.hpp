#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##c##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##d##,1); \
		}; \
	};

#define PISTOL_HOLDER(a,b,c) \
	class Weapon_##a##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Pistols; \
		vehicleClass = WeaponsHandguns; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##c##,1); \
		}; \
	};

#define LAUNCHER_HOLDER(a,b,c) \
	class Weapon_##a##: Launcher_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Launchers; \
		vehicleClass = WeaponsSecondary; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##c##,1); \
		}; \
	};

#define ACC_HOLDER(a,b,c,d,e) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = ##c##; \
		editorSubcategory = ##d##; \
		vehicleClass = ##e##; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

#define ITEM_HOLDER(a,b,c) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = ##c##; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Weapon holders
	// Arma 3
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;
	// Arma 3 Aegis
	class Weapon_LMG_Zafir_black_F: Weapon_Base_F
	{
	  	class TransportMagazines
		{
			mag_xx(150Rnd_762x51_Box_Yellow,1);
		};
	};
    // Arma 3 Atlas
	ACC_HOLDER(optic_LRCO_blk_F,$STR_A3_A_CfgWeapons_optic_LRCO_blk_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories)
	ACC_HOLDER(optic_LRCO_snd_F,$STR_A3_A_CfgWeapons_optic_LRCO_snd_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories)
};