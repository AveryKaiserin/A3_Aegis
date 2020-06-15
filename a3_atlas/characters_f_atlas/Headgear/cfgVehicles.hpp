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
	class Headgear_Base_F;
	// Arma 3 Atlas
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_headset_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_ear_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_ear_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetHBK_aucamo_chops_F,$STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_chops_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_black_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_black_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_brown_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_headset_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_black_headset_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_black_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_brown_headset_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_headset_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetSpecter_cover_autumn_F,$STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_autumn_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetI_I_01_F,$STR_A3_A_CfgWeapons_H_HelmetI_I_01_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Booniehat_sard,$STR_A3_A_CfgWeapons_H_Booniehat_sard0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_sard_hs,$STR_A3_A_CfgWeapons_H_Booniehat_sard_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_jungle,$STR_A3_A_CfgWeapons_H_Booniehat_jungle0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_jungle_hs,$STR_A3_A_CfgWeapons_H_Booniehat_jungle_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_autumn,$STR_A3_A_CfgWeapons_H_Booniehat_autumn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_Booniehat_autumn_hs,$STR_A3_A_CfgWeapons_H_Booniehat_autumn_hs0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_sard,$STR_A3_A_CfgWeapons_H_MilCap_sard0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_jungle,$STR_A3_A_CfgWeapons_H_MilCap_jungle0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_MilCap_autumn,$STR_A3_A_CfgWeapons_H_MilCap_autumn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(H_HelmetCrew_B_aucamo_F,$STR_A3_A_CfgWeapons_H_HelmetCrew_B_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetCrew_B_HIDF,$STR_A3_A_CfgWeapons_H_HelmetCrew_B_HIDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_HelmetCrew_I_I,$STR_A3_A_CfgWeapons_H_HelmetCrew_I_I0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_Tank_cdf_F,$STR_A3_A_CfgWeapons_H_Tank_cdf_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetFighter_B_aucamo_F,$STR_A3_A_CfgWeapons_H_PilotHelmetFighter_B_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetFighter_I_CDF,$STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_CDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetFighter_I_I,$STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_I0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetHeli_B_aucamo_F,$STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetHeli_B_HIDF,$STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_HIDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetHeli_I_CDF,$STR_A3_A_CfgWeapons_H_PilotHelmetHeli_I_CDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_PilotHelmetHeli_I_I,$STR_A3_A_CfgWeapons_H_PilotHelmetHeli_I_I0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_CrewHelmetHeli_B_aucamo_F,$STR_A3_A_CfgWeapons_H_CrewHelmetHeli_B_aucamo_F0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_CrewHelmetHeli_B_HIDF,$STR_A3_A_CfgWeapons_H_CrewHelmetHeli_B_HIDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_CrewHelmetHeli_I_CDF,$STR_A3_A_CfgWeapons_H_CrewHelmetHeli_I_CDF0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_CrewHelmetHeli_I_I,$STR_A3_A_CfgWeapons_H_CrewHelmetHeli_I_I0,EdSubcat_Helmets)
};