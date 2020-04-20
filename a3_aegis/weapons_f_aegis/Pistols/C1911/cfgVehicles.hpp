#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
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
	class Pistol_Base_F;
	WEAPON_HOLDER(hgun_C1911_F,$STR_A3_A_CfgWeapons_hgun_C1911_F0,EdSubcat_Pistols,7Rnd_45ACP_Mag)
};