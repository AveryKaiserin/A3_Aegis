#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_static_AA_F;
	class O_static_AA_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_AA_01_weapon_F: Weapon_Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] +=
			{
				B_HMG_01_support_grn_F,
				O_R_HMG_01_support_F
			};
		};
	};
	class O_AA_01_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo: assembleInfo
		{
			base[] +=
			{
				B_HMG_01_support_grn_F,
				O_R_HMG_01_support_F
			};
		};
	};
	class I_AA_01_weapon_F: Weapon_Bag_Base
	{
		class assembleInfo: assembleInfo
		{
			base[] +=
			{
				B_HMG_01_support_grn_F,
				O_R_HMG_01_support_F
			};
		};
	};
	// Arma 3 Apex
	class B_T_Static_AA_F: B_static_AA_F
	{
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			base = "";
			primary = false;
			dissasembleTo[] =
			{
				B_AA_01_Weapon_grn_F,
				B_HMG_01_support_grn_F
			};
		};
	};
	// Arma 3 Enoch
	class I_E_AA_01_weapon_F: I_AA_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgOpfor_Aegis.hpp"
};