#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class GMG_TriPod: StaticGrenadeLauncher
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class GMG_01_base_F: GMG_TriPod
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_base_F0;
		descriptionShort = $STR_A3_CfgVehicles_GMG_01_Base1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.4375;
					minFov = 0.03482;
					maxFov = 0.4375;
					visionMode[] =
					{
						Normal,
						NVG
					};
				};
			};
		};
	};
	class B_GMG_01_F;
	class O_GMG_01_F;
	class GMG_01_high_base_F: GMG_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_high_base_F0;
	};
	class B_GMG_01_high_F;
	class O_GMG_01_high_F;
	class GMG_01_A_base_F: GMG_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_GMG_01_A_base_F0;
	};
	class B_GMG_01_A_F;
	class O_GMG_01_A_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_HMG_01_weapon_F: Weapon_Bag_Base{};
	class B_GMG_01_weapon_F: B_HMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {STATIC_SUPPORT_BAGS_HMG_01};
		};
	};
	class I_GMG_01_weapon_F: B_GMG_01_weapon_F{};
	class B_GMG_01_A_weapon_F: B_HMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base[] = {STATIC_SUPPORT_BAGS_HMG_01};
		};
	};
	class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F{};
	class B_HMG_01_high_weapon_F: B_HMG_01_weapon_F{};
	class B_GMG_01_high_weapon_F: B_HMG_01_high_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class I_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F{};
	// Arma 3 Apex
	class B_GMG_01_Weapon_grn_F: I_GMG_01_weapon_F
	{
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
		class assembleInfo: assembleInfo
		{
			assembleTo = B_T_GMG_01_F;
		};
	};
	// Arma 3 Enoch
	class I_E_GMG_01_Weapon_F: I_GMG_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_GMG_01_A_Weapon_F: I_GMG_01_A_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_GMG_01_high_Weapon_F: I_GMG_01_high_weapon_F
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
};