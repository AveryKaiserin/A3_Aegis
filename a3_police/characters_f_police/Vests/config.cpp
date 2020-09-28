#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3 Enoch
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	// Arma 3 Police
	class Police_V_CarrierRigKBT_01_light_POLICE_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_P_CfgWeapons_V_CarrierRigKBT_01_light_POLICE_F0;
		picture = "\A3_Police\Characters_F_Police\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_POLICE_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Vests\Data\CarrierRigKBT_01_Police_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Police\Characters_F_Police\Vests\Data\CarrierRigKBT_01_Police.rvmat"};
	};
	// Deprecated classes
	#include "deprecated.hpp"
};