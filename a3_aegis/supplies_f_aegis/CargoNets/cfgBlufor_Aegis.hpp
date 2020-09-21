// BLU_A_F
class B_A_CargoNet_01_ammo_F: B_CargoNet_01_ammo_F
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
	editorSubcategory = EdSubcat_Ammo_NATO_British;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
	};
    class TransportMagazines
	{
		mag_xx(chemlight_green,2);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellOrange,2);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(20Rnd_556x45_UW_mag,6);
		mag_xx(20Rnd_556x45_Stanag_red,6);
		mag_xx(17Rnd_9x21_Mag,4);
		mag_xx(40Rnd_460x30_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,15);
		mag_xx(3Rnd_HE_Grenade_shell,3);
		mag_xx(30Rnd_65x39_caseless_mag,108);
		mag_xx(200Rnd_65x39_cased_Box_Red,12);
		mag_xx(10Rnd_338_Mag,12);
		mag_xx(8Rnd_12Gauge_Pellets,6);
		mag_xx(8Rnd_12Gauge_Slug,6);
		mag_xx(7Rnd_408_Mag,12);
		mag_xx(130Rnd_338_Mag,6);
		mag_xx(100Rnd_65x39_caseless_mag,12);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(B_IR_Grenade,8);
		mag_xx(SLAMDirectionalMine_Wire_Mag,5);
		mag_xx(APERSMineDispenser_Mag,1);
		mag_xx(NLAW_F,8);
		mag_xx(HandGrenade,24);
		mag_xx(MiniGrenade,24);
		mag_xx(Titan_AA,6);
		mag_xx(Titan_AP,4);
		mag_xx(Titan_AT,6);
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,8);
		weap_xx(arifle_SA80_C_snd_F,4);
		weap_xx(arifle_SA80_GL_snd_F,4);
		weap_xx(LMG_Mk200_plain_F,4);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_G17_F,2);
		weap_xx(launch_NLAW_F,2);
		weap_xx(launch_B_Titan_F,2);
		weap_xx(launch_B_Titan_short_F,2);
		weap_xx(SMG_04_snd_F,2);
		weap_xx(srifle_DMR_02_sniper_F,2);
		weap_xx(srifle_LRR_camo_F,2);
		weap_xx(MMG_02_sand_F,2);
		weap_xx(sgun_M4_F,2);
		weap_xx(arifle_MX_F,8);
		weap_xx(arifle_MX_GL_F,4);
		weap_xx(arifle_MXC_F,4);
		weap_xx(arifle_MXM_F,2);
		weap_xx(arifle_MX_SW_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(Binocular,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_01,1);
		item_xx(muzzle_snds_b_snd_F,5);
		item_xx(muzzle_snds_H_snd_F,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_338_sand,2);
		item_xx(muzzle_snds_408_sand,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(bipod_01_F_snd,5);
		item_xx(optic_Arco,2);
		item_xx(optic_Hamr,2);
		item_xx(optic_LRPS,2);
		item_xx(optic_AMS_snd,2);
		item_xx(optic_DMS,2);
		item_xx(optic_NVS,2);
		item_xx(optic_tws,2);
		item_xx(optic_tws_mg,2);
		item_xx(optic_tws_sniper,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_mcamo,5);
	};
};
// BLU_A_tna_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_tropic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_A_CargoNet_01_ammo_tropic_F0;
	editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa",
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
	};
    class TransportMagazines
	{
		mag_xx(chemlight_green,2);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellOrange,2);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(20Rnd_556x45_UW_mag,6);
		mag_xx(20Rnd_556x45_Stanag_red,6);
		mag_xx(17Rnd_9x21_Mag,4);
		mag_xx(40Rnd_460x30_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,15);
		mag_xx(3Rnd_HE_Grenade_shell,3);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,108);
		mag_xx(200Rnd_65x39_cased_Box_Red,12);
		mag_xx(10Rnd_338_Mag,12);
		mag_xx(8Rnd_12Gauge_Pellets,6);
		mag_xx(8Rnd_12Gauge_Slug,6);
		mag_xx(7Rnd_408_Mag,12);
		mag_xx(130Rnd_338_Mag,6);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(B_IR_Grenade,8);
		mag_xx(SLAMDirectionalMine_Wire_Mag,5);
		mag_xx(APERSMineDispenser_Mag,1);
		mag_xx(NLAW_F,8);
		mag_xx(HandGrenade,24);
		mag_xx(MiniGrenade,24);
		mag_xx(Titan_AA,6);
		mag_xx(Titan_AP,4);
		mag_xx(Titan_AT,6);
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,8);
		weap_xx(arifle_SA80_C_khk_F,4);
		weap_xx(arifle_SA80_GL_khk_F,4);
		weap_xx(LMG_Mk200_khk_F,4);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_G17_khaki_F,2);
		weap_xx(launch_NLAW_F,2);
		weap_xx(launch_B_Titan_tna_F,2);
		weap_xx(launch_B_Titan_short_tna_F,2);
		weap_xx(SMG_04_khk_F,2);
		weap_xx(srifle_DMR_02_F,2);
		weap_xx(srifle_LRR_tna_F,2);
		weap_xx(MMG_02_khaki_F,2);
		weap_xx(sgun_M4_F,2);
		weap_xx(arifle_MX_khk_F,8);
		weap_xx(arifle_MX_GL_khk_F,4);
		weap_xx(arifle_MXC_khk_F,4);
		weap_xx(arifle_MXM_khk_F,2);
		weap_xx(arifle_MX_SW_khk_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(Binocular,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(muzzle_snds_b_khk_F,5);
		item_xx(muzzle_snds_H_khk_F,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_338_green,2);
		item_xx(muzzle_snds_408_green,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(bipod_01_F_blk,5);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_LRPS_tna_F,2);
		item_xx(optic_AMS_khk,2);
		item_xx(optic_DMS,2);
		item_xx(optic_NVS,2);
		item_xx(optic_tws,2);
		item_xx(optic_tws_mg,2);
		item_xx(optic_tws_sniper,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_tna_F,5);
	};
};
// BLU_A_wdl_F
class B_A_CargoNet_01_ammo_wdl_F: B_A_CargoNet_01_ammo_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_A_CargoNet_01_ammo_wdl_F0;
	editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
	};
    class TransportMagazines
	{
		mag_xx(chemlight_green,2);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellOrange,2);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(20Rnd_556x45_UW_mag,6);
		mag_xx(20Rnd_556x45_Stanag_red,6);
		mag_xx(17Rnd_9x21_Mag,4);
		mag_xx(40Rnd_460x30_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,15);
		mag_xx(3Rnd_HE_Grenade_shell,3);
		mag_xx(30Rnd_65x39_caseless_black_mag,108);
		mag_xx(200Rnd_65x39_cased_Box_Red,12);
		mag_xx(10Rnd_338_Mag,12);
		mag_xx(8Rnd_12Gauge_Pellets,6);
		mag_xx(8Rnd_12Gauge_Slug,6);
		mag_xx(7Rnd_408_Mag,12);
		mag_xx(130Rnd_338_Mag,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(B_IR_Grenade,8);
		mag_xx(SLAMDirectionalMine_Wire_Mag,5);
		mag_xx(APERSMineDispenser_Mag,1);
		mag_xx(NLAW_F,8);
		mag_xx(HandGrenade,24);
		mag_xx(MiniGrenade,24);
		mag_xx(Titan_AA,6);
		mag_xx(Titan_AP,4);
		mag_xx(Titan_AT,6);
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,8);
		weap_xx(arifle_SA80_C_blk_F,4);
		weap_xx(arifle_SA80_GL_blk_F,4);
		weap_xx(LMG_Mk200_black_F,4);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_G17_black_F,2);
		weap_xx(launch_NLAW_F,2);
		weap_xx(launch_B_Titan_olive_F,2);
		weap_xx(launch_I_Titan_short_F,2);
		weap_xx(SMG_04_blk_F,2);
		weap_xx(srifle_DMR_02_F,2);
		weap_xx(srifle_LRR_F,2);
		weap_xx(MMG_02_black_F,2);
		weap_xx(sgun_M4_F,2);
		weap_xx(arifle_MX_Black_F,8);
		weap_xx(arifle_MX_GL_Black_F,4);
		weap_xx(arifle_MXC_Black_F,4);
		weap_xx(arifle_MXM_Black_F,2);
		weap_xx(arifle_MX_SW_Black_F,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(Binocular,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(muzzle_snds_b,5);
		item_xx(muzzle_snds_H,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_338_black,2);
		item_xx(muzzle_snds_408_black,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(bipod_01_F_blk,5);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Hamr,2);
		item_xx(optic_LRPS,2);
		item_xx(optic_AMS,2);
		item_xx(optic_DMS,2);
		item_xx(optic_NVS,2);
		item_xx(optic_tws,2);
		item_xx(optic_tws_mg,2);
		item_xx(optic_tws_sniper,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,5);
	};
};