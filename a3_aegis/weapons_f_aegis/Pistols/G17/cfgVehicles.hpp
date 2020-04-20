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

class CfgVehicles
{
	class Pistol_Base_F;
	PISTOL_HOLDER(hgun_G17_F,$STR_A3_A_CfgWeapons_hgun_G17_F0,17Rnd_9x21_Mag)
	PISTOL_HOLDER(hgun_G17_black_F,$STR_A3_A_CfgWeapons_hgun_G17_black_F0,17Rnd_9x21_Mag)
	PISTOL_HOLDER(hgun_G17_khaki_F,$STR_A3_A_CfgWeapons_hgun_G17_khaki_F0,17Rnd_9x21_Mag)
};