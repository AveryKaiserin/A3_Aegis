// Arma 3
class NATO_Box_Base;
class Box_NATO_Wps_F: NATO_Box_Base
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,8);
		mag_xx(100Rnd_65x39_caseless_mag,2);
		mag_xx(30Rnd_556x45_Stanag_Sand_red,4);
		mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(200Rnd_556x45_Box_Red_F,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_F,4);
		weap_xx(arifle_MX_GL_F,2);
		weap_xx(arifle_MX_SW_F,2);
		weap_xx(arifle_MXC_F,2);
		weap_xx(arifle_SPAR_01_snd_F,3);
		weap_xx(arifle_SPAR_01_GL_snd_F,1);
		weap_xx(arifle_SPAR_02_snd_F,1);
		delete _xx_SMG_01_F;
		weap_xx(SMG_01_black_F,1);
		weap_xx(hgun_P07_F,1);
		weap_xx(hgun_Pistol_heavy_01_F,1);
		weap_xx(LMG_Mk200_plain_F,1);
		weap_xx(LMG_03_snd_F,1);
	};
	class TransportItems{};
};
class Box_NATO_WpsSpecial_F: NATO_Box_Base
{
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		delete _xx_30Rnd_556x45_Stanag_red;
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(30Rnd_65x39_caseless_mag,6);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(7Rnd_408_mag,8);
		delete _xx_10Rnd_338_Mag;
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(7Rnd_12Gauge_Pellets,3);
		mag_xx(7Rnd_12Gauge_Slug,3);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(arifle_MXM_F,1);
		weap_xx(arifle_SPAR_03_snd_F,1);
		delete _xx_srifle_LRR_F;
		weap_xx(srifle_LRR_camo_F,1);
		delete _xx_srifle_DMR_03_F;
		weap_xx(srifle_DMR_03_tan_F,1);
		delete _xx_srifle_DMR_02_F;
		weap_xx(srifle_EBR_F,1);
		delete _xx_MMG_02_black_F;
		weap_xx(MMG_02_sand_F,1);
		weap_xx(sgun_KSG_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,1);
		item_xx(optic_ERCO_snd_F,1);
		item_xx(optic_SOS,1);
		item_xx(optic_Holosight,1);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(optic_MRD,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		delete _xx_optic_AMS;
		delete _xx_optic_AMS_khk;
		item_xx(optic_AMS_snd,1);
	};
};
class Box_NATO_Ammo_F: NATO_Box_Base
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,48);
		mag_xx(30Rnd_556x45_Stanag_Sand_red,24);
		mag_xx(16Rnd_9x21_Mag,6);
		mag_xx(11Rnd_45ACP_Mag,6);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,12);
		mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,6);
		delete _xx_NLAW_F;
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_3Rnd_HE_Grenade_shell;
		delete _xx_HandGrenade;
		delete _xx_MiniGrenade;
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_NATO_AmmoOrd_F: NATO_Box_Base
{
  class TransportMagazines
  {
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
  };
  class TransportWeapons{};
  class TransportItems{};
};
class Box_NATO_Grenades_F;
class Box_NATO_Support_F: NATO_Box_Base
{
	class TransportMagazines
	{
		mag_xx(Laserbatteries,5);
	};
	class TransportWeapons{};
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
		delete _xx_muzzle_snds_H_khk_F;
		delete _xx_bipod_01_F_khk;
		item_xx(NVGoggles,2);
		delete _xx_NVGoggles_tna_F;
		delete _xx_NVGogglesB_blk_F;
		delete _xx_NVGogglesB_grn_F;
		item_xx(NVGogglesB_gry_F,2);
	};
};
class Box_NATO_WpsLaunch_F: NATO_Box_Base
{
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_F,1);
		weap_xx(launch_B_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_sand_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,3);
	};
};
class Box_NATO_AmmoVeh_F;
class B_supplyCrate_F: ReammoBox_F
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,30);
		mag_xx(16Rnd_9x21_Mag,6);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_F,2);
		weap_xx(arifle_MX_GL_F,1);
		weap_xx(arifle_MX_SW_F,1);
		weap_xx(arifle_MXC_F,1);
		weap_xx(arifle_MXM_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator,1);
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Holosight,1);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_Hamr,1);
		item_xx(optic_SOS,1);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(bipod_01_F_mtp,1);
		item_xx(bipod_01_F_snd,1);
		item_xx(NVGoggles,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_mcamo,2);
	};
};
// Arma 3 Apex
class Box_NATO_Equip_F: ReammoBox_F
{
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt,2);
		delete _xx_V_BandollierB_blk;
		item_xx(V_BandollierB_rgr,2);
		delete _xx_V_Chestrig_blk;
		item_xx(V_Chestrig_rgr,2);
		item_xx(V_ChestrigF_rgr,2);
		item_xx(V_TacVest_blk,2);
		delete _xx_V_PlateCarrier1_blk;
		item_xx(V_PlateCarrier1_rgr,2);
		item_xx(V_PlateCarrier1_mtp,2);
		item_xx(V_PlateCarrierL_CTRG,2);
		item_xx(V_PlateCarrier2_rgr,2);
		delete _xx_V_PlateCarrier2_blk;
		item_xx(V_PlateCarrier2_mtp,2);
		item_xx(V_PlateCarrierH_CTRG,2);
		item_xx(V_PlateCarrierM_CTRG,2);
		delete _xx_V_PlateCarrierGL_blk;
		item_xx(V_PlateCarrierGL_rgr,2);
		item_xx(V_PlateCarrierGL_mtp,2);
		delete _xx_V_PlateCarrierSpec_blk;
		item_xx(V_PlateCarrierSpec_rgr,2);
		item_xx(V_PlateCarrierSpec_mtp,2);
		item_xx(V_RebreatherB,2);
		item_xx(H_Cap_tan_specops_US,2);
		item_xx(H_MilCap_mcamo,2);
		item_xx(H_Booniehat_mcamo,2);
		delete _xx_H_Booniehat_tan;
		item_xx(H_Booniehat_CTRG,2);
		item_xx(H_Beret_02,2);
		item_xx(H_HelmetB_light,2);
		delete _xx_H_HelmetB_light_black;
		delete _xx_H_HelmetB_light_desert;
		delete _xx_H_HelmetB_light_grass;
		item_xx(H_HelmetB_light_mcamo,2);
		delete _xx_H_HelmetB_light_sand;
		item_xx(H_HelmetB_light_snakeskin,2);
		item_xx(H_HelmetSpecB_light,2);
		item_xx(H_HelmetSpecB_light_mcamo,2);
		item_xx(H_HelmetSpecB_light_snakeskin,2);
		item_xx(H_HelmetB,2);
		delete _xx_H_HelmetB_black;
		delete _xx_H_HelmetB_camo;
		delete _xx_H_HelmetB_desert;
		delete _xx_H_HelmetB_grass;
		item_xx(H_HelmetB_mcamo,2);
		delete _xx_H_HelmetB_sand;
		item_xx(H_HelmetB_snakeskin,2);
		item_xx(H_HelmetSpecB,2);
		delete _xx_H_HelmetSpecB_blk;
		item_xx(H_HelmetSpecB_mcamo,2);
		delete _xx_H_HelmetSpecB_paint2;
		delete _xx_H_HelmetSpecB_paint1;
		delete _xx_H_HelmetSpecB_sand;
		item_xx(H_HelmetSpecB_snakeskin,2);
    	item_xx(H_HelmetB_TI_alt_F,2);
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(V_TacChestrig_grn_F,2);
		delete _xx_V_PlateCarrier1_tna_F;
		delete _xx_V_PlateCarrier2_tna_F;
		delete _xx_V_PlateCarrierSpec_tna_F;
		delete _xx_V_PlateCarrierGL_tna_F;
		delete _xx_V_BandollierB_ghex_F;
		delete _xx_V_PlateCarrier1_rgr_noflag_F;
		delete _xx_V_PlateCarrier2_rgr_noflag_F;
		delete _xx_H_HelmetB_TI_tna_F;
		delete _xx_H_HelmetB_tna_F;
		delete _xx_H_HelmetB_Enh_tna_F;
		delete _xx_H_HelmetB_Light_tna_F;
		delete _xx_H_Booniehat_tna_F;
		item_xx(G_B_Diving,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
		bag_xx(B_AssaultPack_rgr,2);
		bag_xx(B_Bergen_mcamo_F,2);
		bag_xx(B_Carryall_mcamo,2);
		bag_xx(B_Kitbag_mcamo,2);
		bag_xx(B_Kitbag_rgr,2);
		bag_xx(B_TacticalPack_mcamo,2);
	};
};
class Box_NATO_Uniforms_F: ReammoBox_F
{
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_CombatUniform_mcam,4);
		item_xx(U_B_CombatUniform_mcam_tshirt,4);
		item_xx(U_B_CombatUniform_mcam_vest,4);
		item_xx(U_B_CTRG_1,4);
		item_xx(U_B_CTRG_3,4);
		item_xx(U_B_CTRG_2,4);
		item_xx(U_B_CTRG_Soldier_alt_1_F,4);
		item_xx(U_B_CTRG_Soldier_alt_2_F,4);
		item_xx(U_B_CTRG_Soldier_alt_3_F,4);
		item_xx(U_B_CombatUniform_wdl,4);
		item_xx(U_B_CombatUniform_wdl_tshirt,4);
		item_xx(U_B_CombatUniform_wdl_vest,4);
		item_xx(U_B_CombatUniform_sgg,4);
		item_xx(U_B_CombatUniform_sgg_tshirt,4);
		item_xx(U_B_CombatUniform_sgg_vest,4);
		item_xx(U_B_HeliPilotCoveralls,4);
		item_xx(U_B_PilotCoveralls,4);
		item_xx(U_B_GhillieSuit,4);
		item_xx(U_B_FullGhillie_ard,4);
		item_xx(U_B_FullGhillie_lsh,4);
		item_xx(U_B_FullGhillie_sard,4);
		item_xx(U_B_Wetsuit,4);
		delete _xx_U_B_T_Soldier_F;
		delete _xx_U_B_T_Soldier_AR_F;
		delete _xx_U_B_T_Soldier_SL_F;
		delete _xx_U_B_T_Sniper_F;
		delete _xx_U_B_T_FullGhillie_tna_F;
		delete _xx_U_B_CTRG_Soldier_F;
		delete _xx_U_B_CTRG_Soldier_2_F;
		delete _xx_U_B_CTRG_Soldier_3_F;
	};
};