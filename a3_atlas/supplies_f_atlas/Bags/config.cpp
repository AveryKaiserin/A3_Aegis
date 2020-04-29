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
	class B_Carryall_mcamo;
	class B_Fieldpack_oli;
	class B_Carryall_oli;
	// Arma 3 Enoch
	class B_RadioBag_01_base_F;
	class B_Carryall_green_F;
	// Arma 3 Aegis
	class B_TacticalPack_sgg;
	// Arma 3 Atlas
	class B_RadioBag_01_jungle_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_jungle_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_jungle_CO.paa"};
	};

	// Soldier Bags
	#include "cfgLegion.hpp"
	#include "cfgHIDF.hpp"
	#include "cfgBlufor_Atlas.hpp"
	/*
	#include "cfgADF.hpp"
	*/
	#include "cfgIDF.hpp"
};