#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = protected; \
		scopeCurator = private; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_and_Skaveria; \
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

class CfgVehicles
{
	// editor weapons
	class Weapon_Base_F;
	WEAPON_HOLDER(srifle_WF50_F,$STR_A3_A_CfgWeapons_srifle_WF50_F0,EdSubcat_SniperRifles,5Rnd_127x99_Mag)
	WEAPON_HOLDER(srifle_WF50_camo_F,$STR_A3_A_CfgWeapons_srifle_WF50_camo_F0,EdSubcat_SniperRifles,5Rnd_127x99_Mag)
	WEAPON_HOLDER(srifle_WF50_tna_F,$STR_A3_A_CfgWeapons_srifle_WF50_tna_F0,EdSubcat_SniperRifles,5Rnd_127x99_Mag)
};