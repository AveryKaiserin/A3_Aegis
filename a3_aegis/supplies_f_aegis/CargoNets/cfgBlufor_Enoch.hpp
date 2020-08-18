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