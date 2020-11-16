#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_and_Steffe_Engdahl; \
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
	WEAPON_HOLDER(SMG_04_blk_F,$STR_A3_A_CfgWeapons_SMG_04_blk_F0,EdSubcat_SubMachineGuns,40Rnd_460x30_Mag_F);
	WEAPON_HOLDER(SMG_04_khk_F,$STR_A3_A_CfgWeapons_SMG_04_khk_F0,EdSubcat_SubMachineGuns,40Rnd_460x30_Mag_F);
	WEAPON_HOLDER(SMG_04_snd_F,$STR_A3_A_CfgWeapons_SMG_04_snd_F0,EdSubcat_SubMachineGuns,40Rnd_460x30_Mag_F);
};