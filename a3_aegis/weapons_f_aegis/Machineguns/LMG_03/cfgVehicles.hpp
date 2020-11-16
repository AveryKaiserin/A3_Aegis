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
	class Weapon_Base_F;
	WEAPON_HOLDER(LMG_03_khk_F,$STR_A3_A_CfgWeapons_LMG_03_khk_F0,EdSubcat_MachineGuns,200Rnd_556x45_Box_F);
	WEAPON_HOLDER(LMG_03_snd_F,$STR_A3_A_CfgWeapons_LMG_03_snd_F0,EdSubcat_MachineGuns,200Rnd_556x45_Box_F);
    /*
	WEAPON_HOLDER(LMG_03_762_F,$STR_A3_A_CfgWeapons_LMG_03_762_F0,EdSubcat_MachineGuns,100Rnd_762x51_Box_F);
	WEAPON_HOLDER(LMG_03_762_khk_F,$STR_A3_A_CfgWeapons_LMG_03_762_khk_F0,EdSubcat_MachineGuns,100Rnd_762x51_Box_F);
	WEAPON_HOLDER(LMG_03_762_snd_F,$STR_A3_A_CfgWeapons_LMG_03_762_snd_F0,EdSubcat_MachineGuns,100Rnd_762x51_Box_F);
    */
};