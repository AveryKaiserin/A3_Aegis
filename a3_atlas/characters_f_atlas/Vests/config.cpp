#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class V_PlateCarrierIAGL_dgtl;
	class V_RebreatherB;
	// Arma 3 Enoch
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	// Arma 3 Atlas
	class V_PlateCarrierIA1_grn: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_grn0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA1_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa"};
	};
	class V_PlateCarrierIA1_sgg: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_sgg0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA1_sgg_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_sgg_CO.paa"};
	};
	class V_PlateCarrierIA2_grn: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_grn0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA2_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa"};
	};
	class V_PlateCarrierIA2_sgg: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_sgg0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA2_sgg_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_sgg_CO.paa"};
	};
	class V_PlateCarrierIAGL_grn: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_grn0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIAGL_grn_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\GA_Carrier_GL_Rig_grn_CO.paa"
		};
	};
	class V_PlateCarrierIAGL_sgg: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_sgg0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIAGL_sgg_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_sgg_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\GA_Carrier_GL_Rig_sgg_CO.paa"
		};
	};
	class V_RebreatherB_aucamo_F: V_RebreatherB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_RebreatherB_aucamo_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_RebreatherB_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"};
		hiddenUnderwaterSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
	};
};