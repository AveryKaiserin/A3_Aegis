#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Headgear holders
	class Headgear_Base_F;
	HEADGEAR_HOLDER(H_HelmetB_plain_white,$STR_A3_A_CfgWeapons_H_HelmetB_plain_white0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_white,$STR_A3_A_CfgWeapons_H_HelmetSpecB_white0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetB_light_white,$STR_A3_A_CfgWeapons_H_HelmetB_light_white0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecB_light_white,$STR_A3_A_CfgWeapons_H_HelmetSpecB_light_white0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetAggressor_cover_arctic_F,$STR_A3_A_CfgWeapons_H_HelmetAggressor_cover_arctic_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_arctic_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_arctic_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_arctic_headset_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_arctic_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_arctic_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_arctic_F0,EdSubcat_Helmets)
};