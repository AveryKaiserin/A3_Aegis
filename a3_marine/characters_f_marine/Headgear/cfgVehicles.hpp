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
	// Arma 3
	class Headgear_Base_F;
	// Arma 3 Marine
	HEADGEAR_HOLDER(H_HelmetO_oceanic,$STR_A3_M_CfgWeapons_H_HelmetO_oceanic0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetLeaderO_oceanic,$STR_A3_M_CfgWeapons_H_HelmetLeaderO_oceanic0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecO_oceanic,$STR_A3_A_CfgWeapons_H_HelmetSpecO_oceanic0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_MilCap_desert,$STR_A3_M_CfgWeapons_H_MilCap_desert0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_mwdl,$STR_A3_M_CfgWeapons_H_MilCap_mwdl0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_oceanic,$STR_A3_M_CfgWeapons_H_MilCap_oceanic0,EdSubcat_Hats)
};