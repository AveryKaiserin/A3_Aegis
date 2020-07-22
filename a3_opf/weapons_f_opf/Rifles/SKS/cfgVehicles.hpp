#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_and_Luchador; \
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
	WEAPON_HOLDER(arifle_SKS_F,$STR_A3_O_CfgWeapons_arifle_SKS_F0,EdSubcat_AssaultRifles,30Rnd_762x39_SKS_Mag_F)
};