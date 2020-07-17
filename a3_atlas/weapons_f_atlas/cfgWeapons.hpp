class CfgWeapons
{
	// Arma 3
	class CannonCore;
	class gatling_20mm: CannonCore
	{
		magazines[] += {500Rnd_20mm_shells_yellow};
	};
	class gatling_25mm: CannonCore
	{
		magazines[] += {PylonWeapon_220Rnd_25mm_shells_yellow};
	};
	class cannon_120mm: CannonCore
	{
		class player;
	};
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		class IRGrenade: ThrowMuzzle
		{
			magazines[] += {I_I_IR_Grenade};
		};
	};
	class ItemCore;
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class launch_Titan_base;
	class srifle_EBR_F;
	class srifle_DMR_01_F;
	class LMG_Zafir_F;
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	// Arma 3 Marksman
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		magazines[] += {150Rnd_93x64_Mag_Red};
	};
	// Arma 3 Apex
	class LMG_03_F;
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_02_blk_F;
	class SMG_05_F;
	// Arma 3 Tanks
	class launch_MRAWS_base_F;
	class launch_MRAWS_olive_rail_F;
	// Arma 3 Enoch
	class LMG_Mk200_black_F;
	class arifle_RPK12_F;
	class arifle_MSBS65_black_F;
	class arifle_MSBS65_Mark_black_F;
	class arifle_MSBS65_GL_black_F;
	class arifle_MSBS65_UBS_black_F;
	// Arma 3 Aegis
	class LMG_Zafir_black_F: LMG_Zafir_F
	{
		magazines[] =
		{
			150Rnd_762x51_Box_Yellow,
			150Rnd_762x51_Box_Tracer_Yellow
		};
	};
	class MMG_01_black_F;
	class arifle_TRG21_black_F;
	class arifle_TRG20_black_F;
	class arifle_TRG21_GL_black_F;
	class arifle_AK12_545_F;
	class arifle_AK12_GL_545_F;
	class arifle_AK12U_545_F;
	// Arma 3 Atlas
	class NVGoggles_aucamo_F: NVGoggles
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_NVGoggles_aucamo_F0;
		//picture = "\A3_Atlas\Weapons_F_Atlas\Binocular\Data\UI\icon_NVGoggles_aucamo_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Binocular\Data\NVG_aucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {camo};
		};
	};
	class launch_B_Titan_coyote_F: launch_Titan_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_B_Titan_coyote_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\launcher_OPFOR_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Launchers\Titan\Data\launch_B_Titan_coyote_F_02_CO.paa"
		};
		//picture = "\A3_Atlas\Weapons_F_Atlas\Launchers\Titan\Data\UI\icon_launch_B_Titan_coyote_F_X_CA.paa";
	};
	class srifle_EBR_cbr_F: srifle_EBR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = srifle_EBR_cbr_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_EBR_cbr_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\LongRangeRifles\EBR\Data\srifle_EBR_cbr_F_1_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\LongRangeRifles\EBR\Data\srifle_EBR_cbr_F_2_CO.paa"
		};
		//picture = "\A3_Atlas\Weapons_F_Atlas\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_cbr_F_X_CA.paa";
	};
	class launch_MRAWS_coyote_F: launch_MRAWS_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = launch_MRAWS_coyote_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_coyote_F0;
		//picture = "\A3_Atlas\Weapons_F_Atlas\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_coyote_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Launchers\MRAWS\Data\launch_MRAWS_coyote_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_CO.paa"
		};
	};
	class launch_MRAWS_coyote_rail_F: launch_MRAWS_olive_rail_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = launch_MRAWS_coyote_rail_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_coyote_rail_F0;
		//picture = "\A3_Atlas\Weapons_F_Atlas\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_coyote_rail_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Launchers\MRAWS\Data\launch_MRAWS_coyote_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_CO.paa"
		};
	};
	#include "presets.hpp"
	class optic_LRCO_blk_F: optic_MRCO
	{
		author = $STR_A3_A_AveryTheKitty_and_Toadie2K;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_optic_LRCO_blk_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_optic_LRCO_blk_F1;
		model = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_blk_F.p3d";
		picture = "\A3_Atlas\Weapons_F_Atlas\Acc\Data\UI\icon_acco_LRCO_blk_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_blk_F.p3d";
		};
	};
	class optic_LRCO_snd_F: optic_LRCO_blk_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Toadie2K;
		displayName = $STR_A3_A_CfgWeapons_optic_LRCO_snd_F0;
		model = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_snd_F.p3d";
		picture = "\A3_Atlas\Weapons_F_Atlas\Acc\Data\UI\icon_acco_LRCO_snd_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\A3_Atlas\Weapons_F_Atlas\Acc\acco_LRCO_snd_F.p3d";
		};
	};
};