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
	PISTOL_HOLDER(hgun_Pistol_02_F,$STR_A3_A_CfgWeapons_hgun_Pistol_02_F0,18Rnd_9x21_Mag)
};