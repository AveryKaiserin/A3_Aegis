#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty_and_Garkain; \
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
	WEAPON_HOLDER(arifle_SCAR_F,$STR_A3_A_CfgWeapons_arifle_SCAR_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_GL_F,$STR_A3_A_CfgWeapons_arifle_SCAR_GL_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_short_F,$STR_A3_A_CfgWeapons_arifle_SCAR_short_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_grip_F,$STR_A3_A_CfgWeapons_arifle_SCAR_grip_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_black_F,$STR_A3_A_CfgWeapons_arifle_SCAR_black_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_GL_black_F,$STR_A3_A_CfgWeapons_arifle_SCAR_GL_black_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_short_black_F,$STR_A3_A_CfgWeapons_arifle_SCAR_short_black_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_grip_black_F,$STR_A3_A_CfgWeapons_arifle_SCAR_grip_black_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_khaki_F,$STR_A3_A_CfgWeapons_arifle_SCAR_khaki_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_GL_khaki_F,$STR_A3_A_CfgWeapons_arifle_SCAR_GL_khaki_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_short_khaki_F,$STR_A3_A_CfgWeapons_arifle_SCAR_short_khaki_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(arifle_SCAR_grip_khaki_F,$STR_A3_A_CfgWeapons_arifle_SCAR_grip_khaki_F0,EdSubcat_AssaultRifles,20Rnd_762x51_Mag)
};