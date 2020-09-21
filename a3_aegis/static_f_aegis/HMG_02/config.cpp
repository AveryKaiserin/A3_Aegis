#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Oldman
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources
		{
			class Hide_Rail;
		};
	};
	class B_HMG_02_F: HMG_02_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_F.jpg";
		scope = public;
	};
	class O_HMG_02_F: HMG_02_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HMG_02_F.jpg";
		scope = public;
	};
	class HMG_02_high_base_F: HMG_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class B_HMG_02_high_F: HMG_02_high_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_high_F.jpg";
		scope = public;
	};
	class O_HMG_02_high_F: HMG_02_high_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HMG_02_high_F.jpg";
		scope = public;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_HMG_02_support_F: Bag_Base
	{
		scope = public;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class O_HMG_02_support_F: B_HMG_02_support_F
	{
		scope = public;
	};
	class I_E_HMG_02_support_F: B_HMG_02_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_G_HMG_02_support_F: B_HMG_02_support_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class B_HMG_02_support_high_F: B_HMG_02_support_F
	{
		scope = public;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class O_HMG_02_support_high_F: B_HMG_02_support_high_F
	{
		scope = public;
	};
	class I_E_HMG_02_support_high_F: B_HMG_02_support_high_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_G_HMG_02_support_high_F: B_HMG_02_support_high_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class B_HMG_02_weapon_F: Weapon_Bag_Base
	{
		scope = public;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {STATIC_SUPPORT_BAGS_HMG_02};
		};
	};
	class O_HMG_02_weapon_F: B_HMG_02_weapon_F
	{
		scope = public;
	};
	class I_E_HMG_02_weapon_F: B_HMG_02_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_G_HMG_02_weapon_F: B_HMG_02_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	class B_HMG_02_high_weapon_F: Weapon_Bag_Base
	{
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_HMG_02_high_weapon_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {STATIC_SUPPORT_BAGS_HMG_02_HIGH};
		};
	};
	class O_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
	{
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_O_HMG_02_high_weapon_F0;
	};
	class I_E_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_G_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_blk_CO.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_blk.paa";
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgBlufor_Aegis.hpp"
};