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
	/*
	// Arma 3
	class Headgear_Base_F;
	//HEADGEAR_HOLDER(H_MilCap_rucamo,$STR_A3_O_CfgWeapons_H_MilCap_rucamo0,EdSubcat_Hats)
	// Arma 3 Opposing Forces
	HEADGEAR_HOLDER(H_Cap_khk_Raven,$STR_A3_O_CfgWeapons_H_Cap_khk_Raven0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Cap_khk_Raven_hs,$STR_A3_O_CfgWeapons_H_Cap_khk_Raven_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Cap_headphones_Raven,$STR_A3_O_CfgWeapons_H_Cap_headphones_Raven0,EdSubcat_Hats)
	*/
};