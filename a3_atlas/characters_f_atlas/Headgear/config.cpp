#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
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
	class H_PilotHelmetFighter_B;
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
	// Arma 3 Atlas
	class H_HelmetCrew_B_oli_F;
	// Arma 3 Atlas
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
	class H_HelmetSpecter_black_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_black_headset_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetSpecter_black_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_UNO_CO.paa"
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
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_cover_UNO_CO.paa"
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
	class H_HelmetCrew_B_HIDF: H_HelmetCrew_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_B_HIDF0;
		class ItemInfo: ItemInfo
		{
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
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
	class H_MilCap_jungle_F: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_jungle_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_MilCap_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_MilCap_jungle_F_CO.paa"};
	};
	class H_Booniehat_jungle_F: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_Booniehat_jungle_F_CO.paa"};
	};
	class H_Booniehat_jungle_hs_F: H_Booniehat_jungle_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_Booniehat_jungle_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_jungle_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	/*
	class H_HelmetCrew_B_ANZAC: H_HelmetCrew_B_oli_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_B_ANZAC0;
	};
	class H_PilotHelmetFighter_B_ANZAC: H_PilotHelmetFighter_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetFighter_B_ANZAC0;
	};
	class H_PilotHelmetHeli_B_ANZAC: H_PilotHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_PilotHelmetHeli_B_ANZAC0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_PilotHelmetHeli_B_ANZAC_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli.p3d";
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	class H_CrewHelmetHeli_B_ANZAC: H_CrewHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_B_ANZAC0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_CrewHelmetHeli_B_ANZAC_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\helmet_heli_aucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield.p3d";
			modelSides[] =
			{
				TWest,
				TCivilian
			};
		};
	};
	*/
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
	class H_HelmetCrew_I_I: H_HelmetCrew_I
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetCrew_I_I0;
		picture = "\A3_Atlas\Characters_F_Atlas\Headgear\Data\UI\icon_H_HelmetCrew_I_I_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetCrew_I_I_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_IA_Helmet_Crew.p3d";
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
	};
	class H_CrewHelmetHeli_I_I: H_CrewHelmetHeli_B
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_CrewHelmetHeli_I_I0;
	};
};