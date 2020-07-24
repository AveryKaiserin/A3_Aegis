#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_AssaultPack_khk;
	class B_AssaultPack_sgg;
	class B_Kitbag_mcamo;
	class B_Kitbag_sgg;
	class B_TacticalPack_Base;
	class B_TacticalPack_rgr;
	class B_TacticalPack_mcamo;
	class B_Fieldpack_Base;
	class B_Carryall_Base;
	class B_Carryall_mcamo;
	class B_Carryall_cbr;
	class B_Fieldpack_oli;
	class B_Carryall_oli;
	// Arma 3 Enoch
	class B_RadioBag_01_base_F;
	class B_Carryall_green_F;
	class B_Carryall_wdl_F;
	class B_FieldPack_green_F;
	// Arma 3 Aegis
	class B_Kitbag_khk;
	class B_TacticalPack_sgg;
	class B_Kitbag_wdl_F;
	// Arma 3 Atlas
		class B_RadioBag_01_tkcamo_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_tkcamo_F0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_tkcamo_F_CA.paa";
		//hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_tkcamo_CO.paa"};
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
	class B_Carryall_tkcamo: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_tkcamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_tkcamo_CA.paa";
		//hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_tkcamo_CO.paa"};
	};
	class B_FieldPack_tkcamo: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_tkcamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_tkcamo_CA.paa";
		//hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_gorod_tkcamo_CO.paa"};
	};
	class B_TacticalPack_aucamo: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_aucamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_TacticalPack_aucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_small_aucamo_CO.paa"};
	};
	#include "cfgLegion.hpp"			// Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	//#include "cfgOpfor_Atlas.hpp"		// CSAT (Caspian)
	#include "cfgADF.hpp"				// ADF
	#include "cfgHIDF.hpp"				// HIDF
	#include "cfgIDF.hpp"				// IDF
};