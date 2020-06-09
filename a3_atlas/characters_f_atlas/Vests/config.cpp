#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class V_RebreatherB;
	// Arma 3 Enoch
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	// Arma 3 Atlas
	class V_CarrierRigKBT_01_aucamo_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_aucamo_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_CarrierRigKBT_01_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_aucamo_CO.paa"};
	};
	class V_CarrierRigKBT_01_light_aucamo_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_aucamo_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_CarrierRigKBT_01_light_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_aucamo_CO.paa"};
	};
	class V_CarrierRigKBT_01_heavy_aucamo_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_aucamo_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_CarrierRigKBT_01_heavy_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_aucamo_CO.paa"};
	};
	class V_RebreatherB_ANZAC: V_RebreatherB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_RebreatherB_ANZAC0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_RebreatherB_ANZAC_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"};
		hiddenUnderwaterSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
	};
};