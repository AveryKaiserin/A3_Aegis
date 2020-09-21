#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Enoch
	class UGV_02_Demining_Base_F;
	class UGV_02_Science_Base_F;
	class C_IDAP_UGV_02_Demining_F: UGV_02_Demining_Base_F
	{
		class assembleInfo
		{
			dissasembleTo[] = {C_IDAP_UGV_02_Demining_backpack_F};
		};
	};
	class Weapon_Bag_Base;
	class UGV_02_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UGV_02_Science_backpack_base_F: UGV_02_backpack_base_F{};
	class UGV_02_Demining_backpack_base_F: UGV_02_backpack_base_F{};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"		// NATO (Pacific)
	#include "cfgOpfor_Exp.hpp"			// CSAT (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
	#include "cfgSpetsnaz.hpp"			// Russia
	#include "cfgBlufor_Aegis.hpp"		// NATO (British)
	#include "cfgIon.hpp"				// ION
};