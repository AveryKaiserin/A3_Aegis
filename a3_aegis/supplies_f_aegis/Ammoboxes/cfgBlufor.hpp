// Arma 3
class NATO_Box_Base;
class Box_NATO_Wps_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,9);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(100Rnd_65x39_caseless_mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_F,4);
		weap_xx(arifle_MX_GL_F,2);
		weap_xx(arifle_MX_SW_F,2);
		weap_xx(arifle_MXC_F,2);
		weap_xx(arifle_MXM_F,1);
		weap_xx(LMG_Mk200_plain_F,1);
		delete _xx_SMG_01_F;
		weap_xx(SMG_01_black_F,1);
		weap_xx(hgun_P07_F,1);
		weap_xx(hgun_Pistol_heavy_01_F,1);
	};
	class TransportItems
    {
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_SOS,1);
		item_xx(optic_MRD,1);
    };
};
class Box_NATO_WpsSpecial_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines
	{
		delete _xx_30Rnd_65x39_caseless_mag;
		mag_xx(7Rnd_408_mag,8);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(20Rnd_556x45_UW_mag,3);
		delete _xx_30Rnd_556x45_Stanag_red;
		mag_xx(20Rnd_556x45_Stanag_red,3);
		delete _xx_10Rnd_338_Mag;
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
		mag_xx(30Rnd_556x45_Stanag_Sand_red,24);
		mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,6);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(arifle_MXM_F,1);
		delete _xx_srifle_LRR_F;
		weap_xx(srifle_LRR_camo_F,1);
		delete _xx_srifle_DMR_03_F;
		weap_xx(srifle_DMR_03_tan_F,1);
		delete _xx_srifle_DMR_02_F;
		weap_xx(srifle_EBR_F,1);
		delete _xx_MMG_02_black_F;
		weap_xx(MMG_02_sand_F,1);
		weap_xx(sgun_KSG_F,1);
		weap_xx(arifle_SPAR_01_snd_F,3);
		weap_xx(arifle_SPAR_01_GL_snd_F,1);
		weap_xx(arifle_SPAR_02_snd_F,1);
		weap_xx(arifle_SPAR_03_snd_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
        delete _xx_optic_ACO;
        delete _xx_optic_ACO_smg;
		item_xx(optic_Hamr,2);
        delete _xx_optic_SOS;
		item_xx(optic_Holosight,2);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
        delete _xx_optic_MRD;
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		delete _xx_optic_AMS;
		delete _xx_optic_AMS_khk;
		item_xx(optic_AMS_snd,1);
	};
};
class Box_NATO_Ammo_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,54);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(11Rnd_45ACP_Mag,2);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,12);
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_3Rnd_HE_Grenade_shell;
		delete _xx_NLAW_F;
		delete _xx_HandGrenade;
		delete _xx_MiniGrenade;
	};
};
class Box_NATO_AmmoOrd_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
    class TransportMagazines
    {
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(APERSMineDispenser_Mag,1);
    };
};
class Box_NATO_Grenades_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(3Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        delete _xx_SmokeShellRed;
        mag_xx(SmokeShellGreen,2);
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellPurple;
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(B_IR_Grenade,8);
	};
};
class Box_NATO_Support_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_M_snd_F,5);
		delete _xx_muzzle_snds_H;
		item_xx(muzzle_snds_H_snd_F,5);
		delete _xx_muzzle_snds_b;
		item_xx(muzzle_snds_b_snd_F,5);
        delete _xx_muzzle_snds_338_black;
        delete _xx_muzzle_snds_338_green;
		item_xx(muzzle_snds_338_sand,2);
		item_xx(muzzle_snds_408_sand,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator,1);
        delete _xx_bipod_01_F_blk;
        delete _xx_bipod_01_F_mtp;
		item_xx(bipod_01_F_snd,5);
		delete _xx_muzzle_snds_H_khk_F;
		delete _xx_bipod_01_F_khk;
		item_xx(NVGoggles,5);
		delete _xx_NVGoggles_tna_F;
		delete _xx_NVGogglesB_blk_F;
		delete _xx_NVGogglesB_grn_F;
		delete _xx_NVGogglesB_gry_F;
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_mcamo,2);
		bag_xx(B_RadioBag_01_mtp_F,2);
	};
};
class Box_NATO_WpsLaunch_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
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
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,4);
	};
};
class Box_NATO_AmmoVeh_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_NATO;
};
class B_supplyCrate_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_NATO;
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,30);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(launch_NLAW_F,1);
		weap_xx(arifle_MX_F,2);
		weap_xx(arifle_MX_SW_F,1);
		weap_xx(arifle_MX_GL_F,1);
		weap_xx(arifle_MXC_F,1);
		weap_xx(arifle_MXM_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Laserdesignator,1);
		item_xx(acc_flashlight,5);
        delete _xx_bipod_01_F_blk;
		item_xx(Binocular,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_SOS,1);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_snd,2);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
        delete _xx_B_Kitbag_mcamo;
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
// Arma 3 Apex
class Box_NATO_Equip_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportItems
	{
		item_xx(V_Rangemaster_belt,2);
		delete _xx_V_BandollierB_blk;
		item_xx(V_BandollierB_rgr,2);
		delete _xx_V_Chestrig_blk;
		item_xx(V_Chestrig_rgr,1);
		item_xx(V_ChestrigF_rgr,1);
		item_xx(V_TacVest_blk,4);
		item_xx(V_TacVest_oli,2);
		delete _xx_V_PlateCarrier1_blk;
		item_xx(V_PlateCarrier1_rgr,2);
		item_xx(V_PlateCarrier1_mtp,2);
		item_xx(V_PlateCarrier2_rgr,2);
		delete _xx_V_PlateCarrier2_blk;
		item_xx(V_PlateCarrier2_mtp,2);
		delete _xx_V_PlateCarrierGL_blk;
		item_xx(V_PlateCarrierGL_rgr,2);
		item_xx(V_PlateCarrierGL_mtp,2);
		delete _xx_V_PlateCarrierSpec_blk;
		item_xx(V_PlateCarrierSpec_rgr,2);
		item_xx(V_PlateCarrierSpec_mtp,2);
		item_xx(H_Cap_tan_specops_US,1);
		item_xx(H_Cap_tan_specops_US_hs,1);
		item_xx(H_MilCap_mcamo,2);
		item_xx(H_Booniehat_mcamo,1);
		item_xx(H_Booniehat_mcamo_hs,1);
		delete _xx_H_Booniehat_tan;
		item_xx(H_Beret_02,2);
		delete _xx_H_HelmetB_light_black;
		delete _xx_H_HelmetB_light_desert;
		delete _xx_H_HelmetB_light_grass;
		item_xx(H_HelmetB_light_mcamo,1);
		delete _xx_H_HelmetB_light_sand;
		item_xx(H_HelmetB_light_snakeskin,1);
		item_xx(H_HelmetSpecB_light_mcamo,1);
		item_xx(H_HelmetSpecB_light_snakeskin,1);
		delete _xx_H_HelmetB;
		delete _xx_H_HelmetB_black;
		delete _xx_H_HelmetB_camo;
		delete _xx_H_HelmetB_desert;
		delete _xx_H_HelmetB_grass;
		item_xx(H_HelmetB_mcamo,3);
		item_xx(H_HelmetB_sand,2);
		delete _xx_H_HelmetB_snakeskin;
		delete _xx_H_HelmetSpecB;
		delete _xx_H_HelmetSpecB_blk;
		item_xx(H_HelmetSpecB_mcamo,3);
		delete _xx_H_HelmetSpecB_paint2;
		delete _xx_H_HelmetSpecB_paint1;
		item_xx(H_HelmetSpecB_sand,2);
		delete _xx_H_HelmetSpecB_snakeskin;
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		delete _xx_V_TacChestrig_grn_F;
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
		item_xx(V_RebreatherB,2);
	};
};
class Box_NATO_Uniforms_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_NATO;
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_CombatUniform_mcam,4);
		item_xx(U_B_CombatUniform_mcam_tshirt,4);
		item_xx(U_B_CombatUniform_mcam_vest,4);
		delete _xx_U_B_CTRG_1;
		delete _xx_U_B_CTRG_3;
		delete _xx_U_B_CTRG_2;
		item_xx(U_B_HeliPilotCoveralls,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_GhillieSuit,2);
		item_xx(U_B_FullGhillie_ard,1);
		item_xx(U_B_FullGhillie_lsh,1);
		item_xx(U_B_FullGhillie_sard,1);
		item_xx(U_B_Wetsuit,2);
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