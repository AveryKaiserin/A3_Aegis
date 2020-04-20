#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Heli
	class CargoNet_01_ammo_base_F;
	class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			mag_xx(100Rnd_65x39_caseless_mag,24);
			mag_xx(200Rnd_65x39_cased_Box_Red,6);
			mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,12);
			mag_xx(200Rnd_556x45_Box_Red_F,6);
			mag_xx(11Rnd_45ACP_Mag,12);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,15);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_762x51_Mag,24);
			mag_xx(30Rnd_45ACP_Mag_SMG_01,12);
			mag_xx(30Rnd_556x45_Stanag_Sand_red,48);
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(30Rnd_65x39_caseless_mag,108);
			mag_xx(3Rnd_HE_Grenade_shell,3);
			mag_xx(7Rnd_408_mag,16);
			mag_xx(130Rnd_338_Mag,6);
        	mag_xx(5Rnd_25x40mm_HE,6);
        	mag_xx(5Rnd_25x40mm_Airburst,6);
			mag_xx(7Rnd_12Gauge_Pellets,6);
			mag_xx(7Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(B_IR_Grenade,8);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,8);
			mag_xx(MRAWS_HE_F,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareWhite_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MX_F,8);
			weap_xx(arifle_MX_GL_F,4);
			weap_xx(arifle_MX_SW_F,4);
			weap_xx(arifle_MXC_F,4);
			weap_xx(arifle_SPAR_01_snd_F,4);
			weap_xx(arifle_SPAR_01_C_snd_F,2);
			weap_xx(arifle_SPAR_01_GL_snd_F,2);
			weap_xx(arifle_SPAR_02_snd_F,2);
			delete _xx_SMG_01_F;
			weap_xx(SMG_01_black_F,2);
			weap_xx(hgun_P07_F,2);
			weap_xx(hgun_Pistol_heavy_01_F,2);
			weap_xx(LMG_Mk200_plain_F,2);
			weap_xx(LMG_03_snd_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(arifle_MXM_F,2);
			weap_xx(arifle_SPAR_03_snd_F,2);
			delete _xx_srifle_LRR_F;
			weap_xx(srifle_LRR_camo_F,2);
			weap_xx(srifle_DMR_03_tan_F,2);
			weap_xx(srifle_EBR_F,2);
			weap_xx(MMG_02_sand_F,2);
			weap_xx(sgun_KSG_F,2);
			weap_xx(GL_XM25_F,2);
			delete _xx_launch_Titan_F;
			weap_xx(launch_B_Titan_F,2);
			delete _xx_launch_Titan_short_F;
			weap_xx(launch_B_Titan_short_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_MRAWS_sand_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_pistol_heavy_01,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M_snd_F,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_snds_H_snd_F,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_snds_B_snd_F,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_snds_338_black,2);
			item_xx(muzzle_snds_338_green,2);
			item_xx(muzzle_snds_338_sand,2);
			item_xx(muzzle_snds_408_black,2);
			item_xx(muzzle_snds_408_green,2);
			item_xx(muzzle_snds_408_sand,2);
			item_xx(muzzle_mzls_acp,5);
			item_xx(muzzle_mzls_smg_01,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(muzzle_mzls_338,2);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator,1);
			item_xx(bipod_01_F_blk,2);
			item_xx(bipod_01_F_mtp,2);
			item_xx(bipod_01_F_snd,2);
			item_xx(NVGoggles,2);
			item_xx(NVGogglesB_gry_F,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Hamr,2);
			item_xx(optic_ERCO_snd_F,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Holosight,2);
			item_xx(optic_Holosight_smg,2);
			item_xx(optic_NVS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_MRD,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_AMS_snd,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_mcamo,5);
		};
	};
	class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			mag_xx(10Rnd_762x54_Mag,24);
			mag_xx(150Rnd_762x54_Box,16);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			delete _xx_30Rnd_556x45_Stanag_green;
			mag_xx(20Rnd_556x45_Stanag_green,6);
			mag_xx(30Rnd_65x39_caseless_green,108);
			delete _xx_30Rnd_9x21_Mag;
			mag_xx(30Rnd_9x21_Mag_SMG_02,12);
			mag_xx(5Rnd_127x108_APDS_Mag,8);
			mag_xx(5Rnd_127x108_Mag,8);
			mag_xx(6Rnd_45ACP_Cylinder,12);
			mag_xx(10Rnd_127x54_Mag,12);
			mag_xx(10Rnd_93x64_DMR_05_Mag,12);
			mag_xx(150Rnd_93x64_Mag,6);
			mag_xx(10Rnd_50BW_Mag_F,6);
			mag_xx(6Rnd_HE_Grenade_shell,6);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(O_IR_Grenade,8);
			mag_xx(RPG32_F,8);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Vorona_HEAT,2);
			mag_xx(Vorona_HE,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareRed_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_Katiba_F,8);
			weap_xx(arifle_Katiba_C_F,4);
			weap_xx(arifle_Katiba_GL_F,4);
			weap_xx(LMG_Zafir_F,4);
			weap_xx(SMG_02_F,2);
			weap_xx(hgun_Rook40_F,2);
			weap_xx(hgun_Pistol_heavy_02_F,2);
			weap_xx(srifle_GM6_camo_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_DMR_01_F,2);
			weap_xx(srifle_DMR_04_F,2);
			weap_xx(srifle_DMR_05_hex_F,2);
			weap_xx(MMG_01_hex_F,2);
			weap_xx(arifle_ARX_blk_F,2);
			weap_xx(sgun_AA40_F,2);
			weap_xx(GL_M32_F,2);
			delete _xx_launch_Titan_F;
			weap_xx(launch_O_Titan_F,2);
			delete _xx_launch_Titan_short_F;
			weap_xx(launch_O_Titan_short_F,2);
			weap_xx(launch_RPG32_F,2);
			weap_xx(launch_O_Vorona_brown_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			delete _xx_muzzle_snds_acp;
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(muzzle_snds_93mmg,5);
			item_xx(muzzle_snds_93mmg_tan,5);
			item_xx(muzzle_mzls_93mmg,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_02,1);
			item_xx(bipod_02_F_blk,2);
			item_xx(bipod_02_F_hex,2);
			item_xx(bipod_02_F_tan,2);
			item_xx(muzzle_snds_65_TI_blk_F,2);
			item_xx(muzzle_snds_65_TI_hex_F,2);
			item_xx(NVGoggles_OPFOR,2);
			item_xx(O_NVGoggles_blk_F,2);
			item_xx(O_NVGoggles_hex_F,2);
			item_xx(O_NVGoggles_urb_F,2);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			delete _xx_optic_MRCO;
			delete _xx_optic_Arco;
			item_xx(optic_Arco_blk_F,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Nightstalker,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_Yorris,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_KHS_blk,2);
			item_xx(optic_KHS_hex,2);
			item_xx(optic_KHS_tan,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,5);
		};
	};
	class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(200Rnd_65x39_cased_Box,12);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_762x51_Mag,24);
			mag_xx(30Rnd_556x45_Stanag,96);
			mag_xx(20Rnd_556x45_Stanag,6);
			mag_xx(30Rnd_9x21_Mag,12);
			mag_xx(5Rnd_127x108_Mag,16);
			mag_xx(9Rnd_45ACP_Mag,12);
			mag_xx(7Rnd_127x33_Mag,12);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(I_IR_Grenade,8);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,8);
			mag_xx(MRAWS_HE_F,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_Mk20C_F,4);
			weap_xx(arifle_Mk20_F,8);
			weap_xx(arifle_Mk20_GL_F,4);
			weap_xx(LMG_Mk200_F,4);
			weap_xx(hgun_PDW2000_F,2);
			weap_xx(hgun_ACPC2_F,2);
			weap_xx(hgun_Mk26_F,2);
			weap_xx(srifle_GM6_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_EBR_F,2);
			weap_xx(sgun_M4_F,2);
			weap_xx(launch_I_Titan_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_MRAWS_olive_rail_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_mzls_acp,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_03,1);
			item_xx(bipod_03_F_blk,3);
			item_xx(NVGoggles_INDEP,2);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			item_xx(optic_MRCO,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Holosight,2);
			item_xx(optic_Holosight_smg,2);
			item_xx(optic_NVS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_dgtl,5);
		};
	};
	// Arma 3 Contact
	class I_E_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F{};
	// Arma 3 Aegis
	class B_T_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_CargoNet_01_ammo_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_B_T_CargoNet_01_ammo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines
		{
			mag_xx(100Rnd_65x39_caseless_khaki_mag,24);
			mag_xx(200Rnd_65x39_cased_Box_Red,6);
			mag_xx(150Rnd_556x45_Drum_Green_Mag_F,12);
			mag_xx(200Rnd_556x45_Box_Red_F,6);
			mag_xx(11Rnd_45ACP_Mag,12);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,15);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_762x51_Mag,24);
			mag_xx(30Rnd_45ACP_Mag_SMG_01,12);
			mag_xx(30Rnd_556x45_Stanag_red,48);
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(30Rnd_65x39_caseless_khaki_mag,108);
			mag_xx(3Rnd_HE_Grenade_shell,3);
			mag_xx(7Rnd_408_mag,16);
			mag_xx(130Rnd_338_Mag,6);
        	mag_xx(5Rnd_25x40mm_HE,6);
        	mag_xx(5Rnd_25x40mm_Airburst,6);
			mag_xx(7Rnd_12Gauge_Pellets,6);
			mag_xx(7Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(B_IR_Grenade,8);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,8);
			mag_xx(MRAWS_HE_F,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareWhite_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MX_khk_F,8);
			weap_xx(arifle_MX_GL_khk_F,4);
			weap_xx(arifle_MX_SW_khk_F,4);
			weap_xx(arifle_MXC_khk_F,4);
			weap_xx(arifle_SPAR_01_khk_F,4);
			weap_xx(arifle_SPAR_01_C_khk_F,2);
			weap_xx(arifle_SPAR_01_GL_khk_F,2);
			weap_xx(arifle_SPAR_02_khk_F,2);
			weap_xx(SMG_01_khk_F,2);
			weap_xx(hgun_P07_khk_F,2);
			weap_xx(hgun_Pistol_heavy_01_black_F,2);
			weap_xx(LMG_Mk200_khk_F,2);
			weap_xx(LMG_03_khk_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(arifle_MXM_khk_F,2);
			weap_xx(arifle_SPAR_03_khk_F,2);
			weap_xx(srifle_LRR_tna_F,2);
			weap_xx(srifle_DMR_03_khaki_F,2);
			weap_xx(srifle_EBR_khk_F,2);
			weap_xx(MMG_02_black_F,2);
			weap_xx(sgun_KSG_F,2);
			weap_xx(GL_XM25_F,2);
			weap_xx(launch_B_Titan_tna_F,2);
			weap_xx(launch_B_Titan_short_tna_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_MRAWS_green_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_pistol_heavy_01,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M_khk_F,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_snds_B_khk_F,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_snds_338_black,2);
			item_xx(muzzle_snds_408_black,2);
			item_xx(muzzle_mzls_acp,5);
			item_xx(muzzle_mzls_smg_01,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(muzzle_mzls_338,2);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_01_khk_F,1);
			item_xx(muzzle_snds_H_khk_F,5);
			item_xx(bipod_01_F_khk,2);
			item_xx(NVGoggles_tna_F,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Hamr_khk_F,2);
			item_xx(optic_SOS_khk_F,2);
			item_xx(optic_Holosight_khk_F,2);
			item_xx(optic_Holosight_smg_khk_F,2);
			item_xx(optic_NVS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_MRD_blk_F,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS_tna_F,2);
			item_xx(optic_AMS_khk,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_tna_F,5);
		};
	};
	class O_T_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_CargoNet_01_ammo_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_O_T_CargoNet_01_ammo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa"
		};
		class TransportMagazines
		{
			mag_xx(20Rnd_650x39_Cased_Mag_F,24);
			mag_xx(100Rnd_580x42_Mag_F,24);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_556x45_Stanag_green,6);
			mag_xx(30Rnd_580x42_Mag_F,96);
			mag_xx(30Rnd_9x21_Mag_SMG_02,12);
			mag_xx(5Rnd_127x108_APDS_Mag,8);
			mag_xx(5Rnd_127x108_Mag,8);
			mag_xx(6Rnd_45ACP_Cylinder,12);
			mag_xx(10Rnd_127x54_Mag,12);
			mag_xx(10Rnd_93x64_DMR_05_Mag,12);
			mag_xx(150Rnd_93x64_Mag,6);
			mag_xx(10Rnd_50BW_Mag_F,6);
			mag_xx(30Rnd_65x39_caseless_green,12);
			mag_xx(6Rnd_HE_Grenade_shell,6);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(O_IR_Grenade,8);
			mag_xx(RPG32_F,8);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Vorona_HEAT,2);
			mag_xx(Vorona_HE,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareRed_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_CTAR_blk_F,12);
			weap_xx(arifle_CTAR_GL_blk_F,4);
			weap_xx(arifle_CTARS_blk_F,4);
			weap_xx(SMG_02_F,2);
			weap_xx(hgun_Rook40_F,2);
			weap_xx(hgun_Pistol_heavy_02_F,2);
			weap_xx(srifle_GM6_ghex_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_DMR_07_blk_F,2);
			weap_xx(srifle_DMR_04_F,2);
			weap_xx(srifle_DMR_05_ghex_F,2);
			weap_xx(MMG_01_ghex_F,2);
			weap_xx(arifle_ARX_blk_F,2);
			weap_xx(sgun_AA40_F,2);
			weap_xx(GL_M32_F,2);
			weap_xx(launch_O_Titan_ghex_F,2);
			weap_xx(launch_O_Titan_short_ghex_F,2);
			weap_xx(launch_RPG32_ghex_F,2);
			weap_xx(launch_O_Vorona_green_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(muzzle_snds_93mmg,5);
			item_xx(muzzle_mzls_93mmg,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_02_ghex_F,1);
			item_xx(bipod_02_F_blk,2);
			item_xx(bipod_02_F_hex,2);
			item_xx(muzzle_snds_65_TI_blk_F,2);
			item_xx(muzzle_snds_65_TI_ghex_F,2);
			item_xx(NVGoggles_OPFOR,2);
			item_xx(O_NVGoggles_blk_F,2);
			item_xx(O_NVGoggles_ghex_F,2);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			item_xx(optic_Arco_blk_F,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Nightstalker,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_Yorris,2);
			item_xx(optic_DMS_ghex_F,2);
			item_xx(optic_LRPS_ghex_F,2);
			item_xx(optic_KHS_blk,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,5);
		};
	};
	class B_W_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_CargoNet_01_ammo_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_B_W_CargoNet_01_ammo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines
		{
			mag_xx(100Rnd_65x39_caseless_black_mag,24);
			mag_xx(200Rnd_65x39_cased_Box_Red,6);
			mag_xx(150Rnd_556x45_Drum_Mag_F,12);
			mag_xx(200Rnd_556x45_Box_Red_F,6);
			mag_xx(11Rnd_45ACP_Mag,12);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,15);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_762x51_Mag,24);
			mag_xx(30Rnd_45ACP_Mag_SMG_01,12);
			mag_xx(30Rnd_556x45_Stanag_red,48);
			mag_xx(30Rnd_65x39_caseless_black_mag,108);
			mag_xx(3Rnd_HE_Grenade_shell,3);
			mag_xx(7Rnd_408_mag,16);
			mag_xx(130Rnd_338_Mag,6);
        	mag_xx(5Rnd_25x40mm_HE,6);
        	mag_xx(5Rnd_25x40mm_Airburst,6);
			mag_xx(7Rnd_12Gauge_Pellets,6);
			mag_xx(7Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(B_IR_Grenade,8);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,8);
			mag_xx(MRAWS_HE_F,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareWhite_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MX_Black_F,8);
			weap_xx(arifle_MX_GL_Black_F,4);
			weap_xx(arifle_MX_SW_Black_F,4);
			weap_xx(arifle_MXC_Black_F,4);
			weap_xx(arifle_SPAR_01_blk_F,4);
			weap_xx(arifle_SPAR_01_C_blk_F,2);
			weap_xx(arifle_SPAR_01_GL_blk_F,2);
			weap_xx(arifle_SPAR_02_blk_F,2);
			weap_xx(SMG_01_black_F,2);
			weap_xx(hgun_P07_blk_F,2);
			weap_xx(hgun_Pistol_heavy_01_black_F,2);
			weap_xx(LMG_Mk200_black_F,2);
			weap_xx(LMG_03_F,2);
			weap_xx(arifle_MXM_Black_F,2);
			weap_xx(arifle_SPAR_03_blk_F,2);
			weap_xx(srifle_LRR_F,2);
			weap_xx(srifle_DMR_03_F,2);
			weap_xx(srifle_EBR_blk_F,2);
			weap_xx(MMG_02_black_F,2);
			weap_xx(sgun_KSG_F,2);
			weap_xx(GL_XM25_F,2);
			weap_xx(launch_B_Titan_olive_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_MRAWS_green_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_snds_338_black,2);
			item_xx(muzzle_snds_408_black,2);
			item_xx(muzzle_mzls_acp,5);
			item_xx(muzzle_mzls_smg_01,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(muzzle_mzls_338,2);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_01_khk_F,1);
			item_xx(bipod_01_F_blk,2);
			item_xx(NVGoggles_INDEP,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Hamr,2);
			item_xx(optic_ERCO_blk_F,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Holosight_blk_F,2);
			item_xx(optic_Holosight_smg_blk_F,2);
			item_xx(optic_NVS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_MRD_black,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_AMS,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_rgr,5);
		};
	};
	class O_R_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_CargoNet_01_ammo_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_O_R_CargoNet_01_ammo_F0;
		hiddenSelections[] =
		{
			Camo_1,
			Camo_2,
			Camo_3,
			Camo_3_MLOD,
			Camo_4
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Cargo_stripes_RUS_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Ammo_cargo_RUS_mlod_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Pallet_MilBoxes_RUS_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(10Rnd_762x54_Mag,24);
			mag_xx(75Rnd_762x39_AK12_Mag_F,24);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_556x45_Stanag_green,6);
			mag_xx(30Rnd_545x39_black_Mag_F,96);
			mag_xx(30Rnd_762x39_AK12_Lush_Mag_F,48);
        	mag_xx(75Rnd_762x39_AK12_Lush_Mag_F,16);
			mag_xx(30Rnd_9x21_Mag_SMG_02,12);
			mag_xx(6Rnd_9x33_Cylinder,12);
			mag_xx(10Rnd_127x54_Mag,12);
			mag_xx(10Rnd_93x64_DMR_05_Mag,12);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(O_R_IR_Grenade,8);
			mag_xx(RPG32_F,8);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Vorona_HEAT,2);
			mag_xx(Vorona_HE,2);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,6);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareRed_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_AK12_545_F,8);
			weap_xx(arifle_AK12_GL_545_F,4);
			weap_xx(arifle_AK12U_545_F,4);
			weap_xx(arifle_RPK12_F,4);
			weap_xx(arifle_AK12_lush_F,4);
			weap_xx(arifle_AK12_GL_lush_F,2);
			weap_xx(arifle_AK12U_lush_F,2);
			weap_xx(arifle_RPK12_lush_F,2);
			weap_xx(hgun_Rook40_F,2);
        	weap_xx(hgun_Pistol_heavy_03_F,2);
			weap_xx(SMG_02_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_DMR_01_black_F,2);
			weap_xx(srifle_DMR_04_F,2);
			weap_xx(srifle_DMR_05_blk_F,2);
			weap_xx(sgun_Mp153_black_F,2);
			weap_xx(launch_B_Titan_olive_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_RPG32_green_F,2);
			weap_xx(launch_O_Vorona_green_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_snds_545,5);
			item_xx(muzzle_mzls_545,5);
			item_xx(muzzle_snds_B,5);
			item_xx(muzzle_mzls_B,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_02,1);
			item_xx(bipod_02_F_blk,1);
			item_xx(O_NVGoggles_grn_F,2);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			item_xx(optic_Holosight_blk_F,2);
			item_xx(optic_Holosight_smg_blk_F,2);
			item_xx(optic_Arco_blk_F,2);
			item_xx(optic_Arco_AK_blk_F,2);
			item_xx(optic_nightstalker,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(optic_DMS,2);
			item_xx(optic_DMS_weathered_F,2);
			item_xx(optic_DMS_weathered_kir_F,2);
			item_xx(optic_LRPS,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_green_F,5);
			bag_xx(O_R_GMG_01_Weapon_F,1);
			bag_xx(O_R_GMG_01_high_Weapon_F,1);
			bag_xx(O_R_GMG_01_A_Weapon_F,1);
			bag_xx(O_R_HMG_01_Weapon_F,1);
			bag_xx(O_R_HMG_01_high_Weapon_F,1);
			bag_xx(O_R_HMG_01_A_Weapon_F,1);
			bag_xx(O_R_HMG_01_support_F,6);
			bag_xx(O_R_HMG_01_support_high_F,2);
			bag_xx(O_R_Static_Designator_02_weapon_F,1);
			bag_xx(O_R_Mortar_01_Weapon_F,1);
			bag_xx(O_R_Mortar_01_support_F,1);
			bag_xx(O_R_AT_01_weapon_F,1);
			bag_xx(O_R_AA_01_weapon_F,1);
		};
	};
	class B_A_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_B_A_CargoNet_01_ammo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_mag,96);
			mag_xx(200Rnd_65x39_cased_Box_Red,12);
			mag_xx(10Rnd_338_Mag,24);
			mag_xx(30Rnd_556x45_Stanag_Sand_red,48);
			mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,12);
			mag_xx(20Rnd_762x51_Mag,12);
			mag_xx(40Rnd_460x30_Mag_F,12);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(5Rnd_127x99_Mag,16);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(HandGrenade,12);
			mag_xx(MiniGrenade,12);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(UGL_FlareWhite_F,2);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(B_IR_Grenade,8);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AT,6);
			mag_xx(Titan_AP,6);
			mag_xx(NLAW_F,6);
			mag_xx(Laserbatteries,5);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SA80_snd_F,8);
			weap_xx(arifle_SA80_C_snd_F,4);
			weap_xx(arifle_SA80_GL_snd_F,4);
			weap_xx(LMG_Mk200_plain_F,4);
			weap_xx(srifle_DMR_02_sniper_F,4);
			weap_xx(arifle_SPAR_01_snd_F,6);
			weap_xx(arifle_SPAR_01_GL_snd_F,2);
			weap_xx(arifle_SPAR_02_snd_F,2);
			weap_xx(arifle_SPAR_03_snd_F,2);
			weap_xx(SMG_04_snd_F,2);
			weap_xx(hgun_G17_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_WF50_F,2);
			weap_xx(sgun_M4_F,2);
			weap_xx(launch_B_Titan_F,2);
			weap_xx(launch_B_Titan_short_F,2);
			weap_xx(launch_NLAW_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_460,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M_snd_F,5);
			item_xx(muzzle_snds_H_snd_F,5);
			item_xx(muzzle_snds_B_snd_F,5);
			item_xx(muzzle_snds_338_sand,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator,1);
			item_xx(bipod_01_F_blk,2);
			item_xx(bipod_01_F_mtp,2);
			item_xx(bipod_01_F_snd,2);
			item_xx(NVGoggles,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Arco,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Holosight,2);
			item_xx(optic_Holosight_smg,2);
			item_xx(optic_NVS,2);
			item_xx(optic_TWS,2);
			item_xx(optic_TWS_MG,2);
			item_xx(optic_TWS_Sniper,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_AMS_snd,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_mcamo,5);
			bag_xx(B_GMG_01_weapon_F,1);
			bag_xx(B_GMG_01_high_weapon_F,1);
			bag_xx(B_GMG_01_A_weapon_F,1);
			bag_xx(B_HMG_01_weapon_F,1);
			bag_xx(B_HMG_01_high_weapon_F,1);
			bag_xx(B_HMG_01_A_weapon_F,1);
			bag_xx(B_HMG_01_support_F,6);
			bag_xx(B_HMG_01_support_high_F,2);
			bag_xx(B_Static_Designator_01_weapon_F,1);
			bag_xx(B_Mortar_01_weapon_F,1);
			bag_xx(B_Mortar_01_support_F,1);
			bag_xx(B_AT_01_weapon_F,1);
			bag_xx(B_AA_01_weapon_F,1);
		};
	};
	// NATO (Pacific, British)
	class B_A_CargoNet_01_ammo_tropic_F: B_A_CargoNet_01_ammo_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_tropic_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_B_A_CargoNet_01_ammo_tropic_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_khaki_mag,96);
			mag_xx(200Rnd_65x39_cased_Box_Red,12);
			mag_xx(10Rnd_338_Mag,24);
			mag_xx(30Rnd_556x45_Stanag_red,48);
			mag_xx(150Rnd_556x45_Drum_Green_Mag_F,12);
			mag_xx(20Rnd_762x51_Mag,12);
			mag_xx(40Rnd_460x30_Mag_F,12);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(5Rnd_127x99_Mag,16);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(HandGrenade,12);
			mag_xx(MiniGrenade,12);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(UGL_FlareWhite_F,2);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(B_IR_Grenade,8);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AT,6);
			mag_xx(Titan_AP,6);
			mag_xx(NLAW_F,6);
			mag_xx(Laserbatteries,5);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SA80_khk_F,8);
			weap_xx(arifle_SA80_C_khk_F,4);
			weap_xx(arifle_SA80_GL_khk_F,4);
			weap_xx(LMG_Mk200_khk_F,4);
			weap_xx(srifle_DMR_02_F,4);
			weap_xx(arifle_SPAR_01_khk_F,6);
			weap_xx(arifle_SPAR_01_GL_khk_F,2);
			weap_xx(arifle_SPAR_02_khk_F,2);
			weap_xx(arifle_SPAR_03_khk_F,2);
			weap_xx(SMG_04_khk_F,2);
			weap_xx(hgun_G17_khaki_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_WF50_F,2);
			weap_xx(sgun_M4_F,2);
			weap_xx(launch_B_Titan_tna_F,2);
			weap_xx(launch_B_Titan_short_tna_F,2);
			weap_xx(launch_NLAW_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_460,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M_khk_F,5);
			item_xx(muzzle_snds_H_khk_F,5);
			item_xx(muzzle_snds_B_khk_F,5);
			item_xx(muzzle_snds_338_black,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_01_khk_F,1);
			item_xx(bipod_01_F_blk,3);
			item_xx(bipod_01_F_khk,3);
			item_xx(NVGoggles_tna_F,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Arco_blk_F,2);
			item_xx(optic_SOS_khk_F,2);
			item_xx(optic_Holosight_khk_F,2);
			item_xx(optic_Holosight_smg_khk_F,2);
			item_xx(optic_NVS,2);
			item_xx(optic_TWS,2);
			item_xx(optic_TWS_MG,2);
			item_xx(optic_TWS_Sniper,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_AMS_khk,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_tna_F,5);
			bag_xx(B_GMG_01_Weapon_grn_F,1);
			bag_xx(B_GMG_01_high_Weapon_grn_F,1);
			bag_xx(B_GMG_01_A_Weapon_grn_F,1);
			bag_xx(B_HMG_01_Weapon_grn_F,1);
			bag_xx(B_HMG_01_high_Weapon_grn_F,1);
			bag_xx(B_HMG_01_A_Weapon_grn_F,1);
			bag_xx(B_HMG_01_support_grn_F,6);
			bag_xx(B_HMG_01_support_high_grn_F,2);
			bag_xx(B_T_Static_Designator_01_weapon_F,1);
			bag_xx(B_Mortar_01_Weapon_grn_F,1);
			bag_xx(B_Mortar_01_support_grn_F,1);
			bag_xx(B_AT_01_Weapon_grn_F,1);
			bag_xx(B_AA_01_Weapon_grn_F,1);
		};
	};
	// NATO (Woodland, British)
	class B_A_CargoNet_01_ammo_wdl_F: CargoNet_01_ammo_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.825;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_wdl_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_B_A_CargoNet_01_ammo_wdl_F0;
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat",
			"\A3\Data_F\default_alpha.rvmat"
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_black_mag,96);
			mag_xx(200Rnd_65x39_cased_Box_Red,12);
			mag_xx(10Rnd_338_Mag,24);
			mag_xx(30Rnd_556x45_Stanag_red,48);
			mag_xx(150Rnd_556x45_Drum_Mag_F,12);
			mag_xx(20Rnd_762x51_Mag,12);
			mag_xx(40Rnd_460x30_Mag_F,12);
			mag_xx(17Rnd_9x21_Mag,12);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(5Rnd_127x99_Mag,16);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(APERSMineDispenser_Mag,5);
			mag_xx(FlareTripMine_Wire_Mag,5);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(HandGrenade,12);
			mag_xx(MiniGrenade,12);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(SmokeShellPurple,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(UGL_FlareWhite_F,2);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(B_IR_Grenade,8);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AT,6);
			mag_xx(Titan_AP,6);
			mag_xx(NLAW_F,6);
			mag_xx(Laserbatteries,5);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SA80_blk_F,8);
			weap_xx(arifle_SA80_C_blk_F,4);
			weap_xx(arifle_SA80_GL_blk_F,4);
			weap_xx(LMG_Mk200_black_F,4);
			weap_xx(srifle_DMR_02_F,4);
			weap_xx(arifle_SPAR_01_blk_F,6);
			weap_xx(arifle_SPAR_01_GL_blk_F,2);
			weap_xx(arifle_SPAR_02_blk_F,2);
			weap_xx(arifle_SPAR_03_blk_F,2);
			weap_xx(SMG_04_blk_F,2);
			weap_xx(hgun_G17_black_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(srifle_WF50_F,2);
			weap_xx(sgun_M4_F,2);
			weap_xx(launch_B_Titan_olive_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_NLAW_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
			item_xx(ItemGPS,5);
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,5);
			item_xx(acc_pointer_IR,5);
			item_xx(muzzle_snds_460,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_snds_H,5);
			item_xx(muzzle_snds_b,5);
			item_xx(muzzle_snds_338_black,5);
			item_xx(muzzle_mzls_L,5);
			item_xx(muzzle_mzls_M,5);
			item_xx(muzzle_mzls_H,5);
			item_xx(muzzle_mzls_b,5);
			item_xx(Binocular,1);
			item_xx(Rangefinder,1);
			item_xx(Laserdesignator_01_khk_F,1);
			item_xx(bipod_01_F_blk,6);
			item_xx(NVGoggles_INDEP,2);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_Arco_blk_F,2);
			item_xx(optic_SOS,2);
			item_xx(optic_Holosight_blk_F,2);
			item_xx(optic_Holosight_smg_blk_F,2);
			item_xx(optic_NVS,2);
			item_xx(optic_TWS,2);
			item_xx(optic_TWS_MG,2);
			item_xx(optic_TWS_Sniper,2);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_AMS,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_rgr,5);
			bag_xx(B_GMG_01_Weapon_grn_F,1);
			bag_xx(B_GMG_01_high_Weapon_grn_F,1);
			bag_xx(B_GMG_01_A_Weapon_grn_F,1);
			bag_xx(B_HMG_01_Weapon_grn_F,1);
			bag_xx(B_HMG_01_high_Weapon_grn_F,1);
			bag_xx(B_HMG_01_A_Weapon_grn_F,1);
			bag_xx(B_HMG_01_support_grn_F,6);
			bag_xx(B_HMG_01_support_high_grn_F,2);
			bag_xx(B_W_Static_Designator_01_weapon_F,1);
			bag_xx(B_Mortar_01_Weapon_grn_F,1);
			bag_xx(B_Mortar_01_support_grn_F,1);
			bag_xx(B_AT_01_Weapon_grn_F,1);
			bag_xx(B_AA_01_Weapon_grn_F,1);
		};
	};
};