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
	WEAPON_HOLDER(arifle_SA80_blk_F,$STR_A3_A_CfgWeapons_arifle_SA80_blk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_black_mag)
	WEAPON_HOLDER(arifle_SA80_snd_F,$STR_A3_A_CfgWeapons_arifle_SA80_snd_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_mag)
	WEAPON_HOLDER(arifle_SA80_khk_F,$STR_A3_A_CfgWeapons_arifle_SA80_khk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_khaki_mag)
	WEAPON_HOLDER(arifle_SA80_GL_blk_F,$STR_A3_A_CfgWeapons_arifle_SA80_GL_blk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_black_mag)
	WEAPON_HOLDER(arifle_SA80_GL_snd_F,$STR_A3_A_CfgWeapons_arifle_SA80_GL_snd_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_mag)
	WEAPON_HOLDER(arifle_SA80_GL_khk_F,$STR_A3_A_CfgWeapons_arifle_SA80_GL_khk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_khaki_mag)
	WEAPON_HOLDER(arifle_SA80_C_blk_F,$STR_A3_A_CfgWeapons_arifle_SA80_C_blk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_black_mag)
	WEAPON_HOLDER(arifle_SA80_C_snd_F,$STR_A3_A_CfgWeapons_arifle_SA80_C_snd_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_mag)
	WEAPON_HOLDER(arifle_SA80_C_khk_F,$STR_A3_A_CfgWeapons_arifle_SA80_C_khk_F0,EdSubcat_AssaultRifles,30Rnd_65x39_caseless_khaki_mag)
};