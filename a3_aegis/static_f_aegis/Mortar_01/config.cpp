#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
				factions[] =
				{
					BLU_F,
					IND_F,
					BLU_G_F,
					IND_G_F,
					OPF_G_F,
					BLU_T_F,
					BLU_W_F,
					OPF_R_F,
					IND_E_F,
					BLU_A_F
				};
			};
			class Hex
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_OPFOR_CO.paa"};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"};
				factions[] = {OPF_T_F};
			};
		};
	};
	class B_Mortar_01_F;
	class O_Mortar_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
	class B_Mortar_01_support_F: Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class I_Mortar_01_support_F;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {STATIC_SUPPORT_BAGS_MORTAR_01};
		};
	};
	class O_Mortar_01_weapon_F: B_Mortar_01_weapon_F{};
	class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F{};
	// Arma 3 Apex
	class B_Mortar_01_support_grn_F: I_Mortar_01_support_F
	{
		scope = public;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	};
	class B_Mortar_01_Weapon_grn_F: I_Mortar_01_weapon_F
	{
		scope = public;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
		class assembleInfo: assembleInfo
		{
			assembleTo = B_T_Mortar_01_F;
		};
	};
	// Arma 3 Enoch
	class I_E_Mortar_01_support_F: I_Mortar_01_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_Mortar_01_Weapon_F: I_Mortar_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};