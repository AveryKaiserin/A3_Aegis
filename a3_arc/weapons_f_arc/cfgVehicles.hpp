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
	class Item_Base_F;
	class Weapon_Base_F;
	ITEM_HOLDER(NVGoggles_arc_F,$STR_A3_A_CfgWeapons_NVGoggles_arc_F0,"\A3\Weapons_F\DummyNVG.p3d")
	WEAPON_HOLDER(srifle_DMR_03_arctic_F,$STR_A3_A_CfgWeapons_srifle_DMR_03_arctic_F0,EdSubcat_SniperRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_AK12_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12_arctic_F0,EdSubcat_AssaultRifles,30Rnd_762x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12_GL_arctic_F0,EdSubcat_AssaultRifles,30Rnd_762x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12U_arctic_F0,EdSubcat_AssaultRifles,30Rnd_762x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_RPK12_arctic_F,$STR_A3_A_CfgWeapons_arifle_RPK12_arctic_F0,EdSubcat_AssaultRifles,75Rnd_762x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12_545_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_arctic_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_GL_arctic_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_arctic_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_arctic_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_SPAR_01_arc_F,$STR_A3_A_CfgWeapons_arifle_SPAR_01_arc_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_C_arc_F,$STR_A3_A_CfgWeapons_arifle_SPAR_01_C_arc_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_01_GL_arc_F,$STR_A3_A_CfgWeapons_arifle_SPAR_01_GL_arc_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_SPAR_02_arc_F,$STR_A3_A_CfgWeapons_arifle_SPAR_02_arc_F0,EdSubcat_AssaultRifles,150Rnd_556x45_Drum_Mag_F)
	WEAPON_HOLDER(arifle_SPAR_03_arc_F,$STR_A3_A_CfgWeapons_arifle_SPAR_03_arc_F0,EdSubcat_SniperRifles,20Rnd_762x51_Mag)
};