#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_AssaultPack_khk;
	class B_AssaultPack_sgg;
	class B_AssaultPack_blk;
	class B_Kitbag_mcamo;
	class B_Kitbag_sgg;
	class B_TacticalPack_Base;
	class B_TacticalPack_rgr;
	class B_TacticalPack_mcamo;
	class B_FieldPack_Base;
	class B_Carryall_Base;
	class B_Carryall_mcamo;
	class B_Carryall_cbr;
	class B_FieldPack_oli;
	class B_Carryall_oli;
	// Arma 3 Apex
	class B_ViperHarness_base_F;
	class B_ViperLightHarness_base_F;
	// Arma 3 Enoch
	class B_RadioBag_01_base_F;
	class B_Carryall_green_F;
	class B_Carryall_wdl_F;
	class B_FieldPack_green_F;
	// Arma 3 Aegis
	class B_Kitbag_khk;
	class B_Kitbag_blk;
	class B_TacticalPack_sgg;
	class B_Kitbag_wdl_F;
	// Arma 3 Atlas
	class B_RadioBag_01_semiarid_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_semiarid_F0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_semiarid_F_CA.paa";
		//hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_semiarid_CO.paa"};
		// TFAR compatibility
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_aucamo_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_aucamo_F0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_aucamo_CO.paa"};
		// TFAR compatibility
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_jungle_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_jungle_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_jungle_CO.paa"};
		// TFAR compatibility
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_autumn_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_autumn_F0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_autumn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_autumn_CO.paa"};
		// TFAR compatibility
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_guer_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_Carryall_owcamo: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_owcamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_whex_CO.paa"};
	};
	class B_Carryall_semiarid: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_semiarid0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_semiarid_CO.paa"};
	};
	class B_Carryall_jungle: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_jungle0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_jungle_CO.paa"};
	};
	class B_FieldPack_owcamo: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_owcamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_gorod_whex_CO.paa"};
	};
	class B_FieldPack_semiarid: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_semiarid0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_gorod_semiarid_CO.paa"};
	};
	class B_TacticalPack_aucamo: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_aucamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_TacticalPack_aucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_small_aucamo_CO.paa"};
	};
	class B_TacticalPack_jungle: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_jungle0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_TacticalPack_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_small_jungle_CO.paa"};
	};
	class B_ViperHarness_whex_F: B_ViperHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Viper Harness (Woodland Hex)";
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_ViperHarness_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\Backpack_ViperOp_whex_CO.paa"};
	};
	class B_ViperLightHarness_whex_F: B_ViperLightHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Viper Light Harness (Woodland Hex)";
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_ViperLightHarness_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\Backpack_ViperOp_whex_CO.paa"};
	};
	#include "cfgLegion.hpp"			// Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	#include "cfgOpfor_Atlas.hpp"		// CSAT (Caspian)
	#include "cfgADF.hpp"				// ADF
	#include "cfgHIL.hpp"				// HIL
	#include "cfgIDF.hpp"				// IDF
};