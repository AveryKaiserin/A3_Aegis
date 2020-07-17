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

class CfgVehicles
{
	// editor weapons
	class Weapon_Base_F;
	WEAPON_HOLDER(SMG_06_F,$STR_A3_A_CfgWeapons_SMG_06_F0,EdSubcat_SubMachineGuns,53Rnd_9x21_Mag_F)
};