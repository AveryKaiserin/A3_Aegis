class cfgWeapons
{
	class H_HelmetSpecter_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = private;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_F.p3d";
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
	class H_HelmetSpecter_cover_base_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_cover_F.p3d";
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
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_cover_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_whex_F0;
		//picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
		};
	};