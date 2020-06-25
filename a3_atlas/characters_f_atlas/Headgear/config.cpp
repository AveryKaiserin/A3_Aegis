#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	// Arma 3
	class H_HelmetB;
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo: ItemInfo{};
	};
	class H_HelmetCrew_B;
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_I;
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_MilCap_ocamo;
	// Arma 3 Tanks
	class H_Tank_black_F;
	// Arma 3 Enoch
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	// Arma 3 Atlas
	class H_HelmetHBK_aucamo_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_ear_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetHBK_aucamo_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_aucamo_chops_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetHBK_aucamo_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetHBK_01_aucamo_CO.paa"};
	};
	class H_HelmetSpecter_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetSpecter_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa"};
	};
	class H_HelmetSpecter_black_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_black_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_black_CO.paa"};
	};
	class H_HelmetSpecter_brown_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_brown_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa"};
	};
	class H_HelmetSpecter_headset_base_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_headset_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_headset_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
	  	};
	};
	class H_HelmetSpecter_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_black_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_black_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_black_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_brown_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_brown_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_base_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_cover_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetSpecter_cover_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
	  	};
	};
	class H_HelmetSpecter_cover_autumn_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_autumn_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_cover_autumn_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetI_I_01_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo};
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Headgear\H_HelmetI_I_01_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetI_I_01_F: H_HelmetI_I_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetI_I_01_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetI_I_01_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetI_I_01_CO.paa"};
	};
	class H_Booniehat_sard: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_sard0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_sard_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_sard_CO.paa"};
	};
	class H_Booniehat_sard_hs: H_Booniehat_sard
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_sard_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_sard_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_jungle: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_jungle_CO.paa"};
	};
	class H_Booniehat_jungle_hs: H_Booniehat_jungle
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_autumn: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_autumn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\booniehat_autumn_CO.paa"};
	};
	class H_Booniehat_autumn_hs: H_Booniehat_autumn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_autumn_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_autumn_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_MilCap_sard: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_sard0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_sard_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_sard_CO.paa"};
	};
	class H_MilCap_jungle: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_jungle0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_jungle_CO.paa"};
	};
	class H_MilCap_autumn: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_autumn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_autumn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\cappatrol_autumn_CO.paa"};
	};
	class H_HelmetCrew_B_aucamo_F: H_HelmetCrew_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_B_aucamo_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetCrew_B_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetCrew_B_aucamo_F_CO.paa"};
	};
	class H_HelmetCrew_B_HIDF: H_HelmetCrew_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_B_HIDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_HelmetCrew_I_I: H_HelmetCrew_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_I_I0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetCrew_I_I_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetCrew_I_I_CO.paa"};
	};
	class H_Tank_cdf_F: H_Tank_black_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Tank_cdf_F0;
	};
	class H_PilotHelmetFighter_B_aucamo_F: H_PilotHelmetFighter_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_B_aucamo_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetFighter_B_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\pilot_helmet_aucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	class H_PilotHelmetFighter_I_CDF: H_PilotHelmetFighter_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_CDF0;
	};
	class H_PilotHelmetFighter_I_I: H_PilotHelmetFighter_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_I_I0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_PilotHelmetHeli_B_aucamo_F: H_PilotHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_aucamo_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetHeli_B_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
	};
	class H_PilotHelmetHeli_B_HIDF: H_PilotHelmetHeli_O
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_HIDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	class H_PilotHelmetHeli_I_CDF: H_PilotHelmetHeli_O
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_I_CDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_PilotHelmetHeli_I_I: H_PilotHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_I_I0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_CrewHelmetHeli_B_aucamo_F: H_CrewHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_B_aucamo_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_CrewHelmetHeli_B_aucamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
	};
	class H_CrewHelmetHeli_B_HIDF: H_CrewHelmetHeli_O
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_B_HIDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	class H_CrewHelmetHeli_I_CDF: H_CrewHelmetHeli_O
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_I_CDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
	class H_CrewHelmetHeli_I_I: H_CrewHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_I_I0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
		};
	};
};