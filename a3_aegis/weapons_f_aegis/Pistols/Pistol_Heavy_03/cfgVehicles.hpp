#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_and_Maxim_Koptelov; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##c##; \
		vehicleClass = WeaponsHandguns; \
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
	class Pistol_Base_F;
	WEAPON_HOLDER(hgun_Pistol_heavy_03_F,$STR_A3_A_CfgWeapons_hgun_Pistol_heavy_03_F0,EdSubcat_Pistols,6Rnd_9x33_Cylinder)
};