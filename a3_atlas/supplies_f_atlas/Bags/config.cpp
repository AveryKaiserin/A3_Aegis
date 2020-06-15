#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_AssaultPack_khk;
	class B_AssaultPack_sgg;
	class B_Kitbag_mcamo;
	class B_Kitbag_sgg;
	class B_TacticalPack_rgr;
	class B_TacticalPack_mcamo;
	class B_Carryall_cbr;
	class B_Carryall_mcamo;
	class B_Fieldpack_oli;
	class B_Carryall_oli;
	// Arma 3 Enoch
	class B_RadioBag_01_base_F;
	class B_Carryall_green_F;
	class B_Carryall_wdl_F;
	// Arma 3 Aegis
	class B_Kitbag_khk;
	class B_TacticalPack_sgg;
	class B_Kitbag_wdl_F;
	// Arma 3 Atlas
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
		//hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_autumn_CO.paa"};
		// TFAR compatibility
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_guer_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	#include "cfgLegion.hpp"			// Legion
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	#include "cfgADF.hpp"				// ADF
	#include "cfgHIDF.hpp"				// HIDF
	#include "cfgIDF.hpp"				// IDF
};