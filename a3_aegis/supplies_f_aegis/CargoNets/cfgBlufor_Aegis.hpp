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