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
	HEADGEAR_HOLDER(Marine_H_Booniehat_desert,$STR_A3_M_CfgWeapons_Marine_H_Booniehat_desert0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Marine_H_Booniehat_desert_hs,$STR_A3_M_CfgWeapons_Marine_H_Booniehat_desert_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Marine_H_Booniehat_mwdl,$STR_A3_M_CfgWeapons_Marine_H_Booniehat_mwdl0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Marine_H_Booniehat_mwdl_hs,$STR_A3_M_CfgWeapons_Marine_H_Booniehat_mwdl_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Marine_H_MilCap_desert,$STR_A3_M_CfgWeapons_Marine_H_MilCap_desert0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Marine_H_MilCap_mwdl,$STR_A3_M_CfgWeapons_Marine_H_MilCap_mwdl0,EdSubcat_Hats)
	// Deprecated classes
	DEPRECATED_CLASS(Headgear_H_Booniehat_desert,Headgear_Marine_H_Booniehat_desert)
	DEPRECATED_CLASS(Headgear_H_Booniehat_desert_hs,Headgear_Marine_H_Booniehat_desert_hs)
	DEPRECATED_CLASS(Headgear_H_Booniehat_mwdl,Headgear_Marine_H_Booniehat_mwdl)
	DEPRECATED_CLASS(Headgear_H_Booniehat_mwdl_hs,Headgear_Marine_H_Booniehat_mwdl_hs)
	DEPRECATED_CLASS(Headgear_H_MilCap_desert,Headgear_Marine_H_MilCap_desert)
	DEPRECATED_CLASS(Headgear_H_MilCap_mwdl,Headgear_Marine_H_MilCap_mwdl)
};