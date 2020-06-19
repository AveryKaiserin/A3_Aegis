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
	// Arma 3 Apex
	class Weapon_arifle_AK12_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_F0;
	};
	class Weapon_arifle_AK12_GL_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_F0;
	};
	// Arma 3 Enoch
	class Weapon_arifle_AK12_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_lush_F0;
	};
	class Weapon_arifle_AK12_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arid_F0;
	};
	class Weapon_arifle_AK12_GL_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_lush_F0;
	};
	class Weapon_arifle_AK12_GL_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arid_F0;
	};
	class Weapon_arifle_AK12U_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_F0;
	};
	class Weapon_arifle_AK12U_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_lush_F0;
	};
	class Weapon_arifle_AK12U_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arid_F0;
	};
	// Arma 3 Aegis
	WEAPON_HOLDER(arifle_AK12_545_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Arid_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_F,$STR_A3_A_CfgWeapons_arifle_AK12_GL_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12_GL_545_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12_GL_545_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Arid_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_AK12_Arid_Mag_F)
};