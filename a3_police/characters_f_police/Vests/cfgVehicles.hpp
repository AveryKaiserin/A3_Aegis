#define VEST_HOLDER(a,b) \
	class Vest_##a##: Vest_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Vests; \
		vehicleClass = ItemsVests; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Arma 3
	class Vest_Base_F;
	// Arma 3 Police
	VEST_HOLDER(V_CarrierRigKBT_01_light_POLICE_F,$STR_A3_P_CfgWeapons_V_CarrierRigKBT_01_light_POLICE_F0)
};