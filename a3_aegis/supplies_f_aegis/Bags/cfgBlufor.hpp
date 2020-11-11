/* US */
class B_AssaultPack_mcamo_AT: B_Kitbag_mcamo{};
class B_AssaultPack_mcamo_AA: B_Kitbag_mcamo{};
class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,6);
		mag_xx(100Rnd_65x39_caseless_mag,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		delete _xx_10Rnd_338_Mag;
		mag_xx(20Rnd_762x51_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Kitbag_rgr_AAR: B_Kitbag_rgr
{
	class TransportMagazines
	{
		mag_xx(100Rnd_65x39_caseless_mag,2);
		mag_xx(100Rnd_65x39_caseless_mag_Tracer,2);
		mag_xx(130Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_snd,1);
		item_xx(muzzle_snds_338_sand,1);
		delete _xx_muzzle_snds_H;
		item_xx(muzzle_snds_H_snd_F,1);
	};
};
class B_Carryall_mcamo_Mine: B_Carryall_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSMine_Range_Mag,2);
		mag_xx(APERSBoundingMine_Range_Mag,2);
		mag_xx(APERSMineDispenser_Mag,2);
		mag_xx(APERSTripMine_Wire_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

/* US (Pacific) */
class B_Carryall_oli_BTAmmo_F: B_Carryall_tna_F
{
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		delete _xx_10Rnd_338_Mag;
		mag_xx(20Rnd_762x51_Mag,2);
	};
};
class B_Carryall_oli_BTAAA_F: B_Carryall_tna_F{};
class B_Carryall_oli_BTAAT_F: B_Carryall_tna_F{};
class B_Kitbag_rgr_BTEng_F: B_Kitbag_tna_F{};
class B_Kitbag_rgr_BTExp_F: B_Kitbag_tna_F{};
class B_Kitbag_rgr_BTAA_F: B_Kitbag_tna_F{};
class B_Kitbag_rgr_BTAT_F: B_Kitbag_tna_F{};
class B_AssaultPack_rgr_BTLAT_F: B_AssaultPack_tna_F{};
class B_Kitbag_rgr_BTReconExp_F: B_Kitbag_tna_F{};
class B_AssaultPack_rgr_BTReconMedic: B_AssaultPack_tna_F{};
class B_AssaultPack_rgr_BTLAT2_F: B_AssaultPack_tna_F{};
class B_Carryall_tna_BTMine_F: B_Carryall_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSMine_Range_Mag,2);
		mag_xx(APERSBoundingMine_Range_Mag,2);
		mag_xx(APERSMineDispenser_Mag,2);
		mag_xx(APERSTripMine_Wire_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Kitbag_tna_BTAAR_F: B_Kitbag_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(100Rnd_65x39_caseless_khaki_mag,2);
		mag_xx(100Rnd_65x39_caseless_khaki_mag_Tracer,2);
		mag_xx(130Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_khk,1);
		item_xx(muzzle_snds_338_black,1);
		item_xx(muzzle_snds_H_khk_F,1);
	};
};

/* US (Woodland) */
class B_Kitbag_wdl_BWAT_F: B_Kitbag_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_Kitbag_wdl_BWAA_F: B_Kitbag_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_Kitbag_wdl_BWEng_F: B_Kitbag_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(SatchelCharge_Remote_Mag,1);
		mag_xx(DemoCharge_Remote_Mag,2);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

/* BAF */
class B_Carryall_mcamo_BAAmmo_F: B_Carryall_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(10Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_TacticalPack_mcamo_BAAAR_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(200Rnd_65x39_cased_Box_Tracer_Red,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_snd,1);
		item_xx(muzzle_snds_H_snd_F,1);
	};
};
class B_TacticalPack_mcamo_BAMedic_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_mcamo_BALAT_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_TacticalPack_mcamo_BARepair_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_TacticalPack_mcamo_BAReconMedic_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
        SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_TacticalPack_mcamo_BAReconLAT_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};

/* BAF (Pacific) */
class B_Carryall_tna_BAAmmo_F: B_Carryall_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(10Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_TacticalPack_tna_BAAAR_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(200Rnd_65x39_cased_Box_Tracer_Red,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_khk,1);
		item_xx(muzzle_snds_H_khk_F,1);
	};
};
class B_TacticalPack_tna_BAMedic_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_tna_BALAT_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_TacticalPack_tna_BARepair_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_TacticalPack_tna_BAReconMedic_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
        SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_TacticalPack_tna_BAReconLAT_F: B_TacticalPack_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};

/* BAF (Woodland) */
class B_Carryall_wdl_BAAmmo_F: B_Carryall_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(10Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_TacticalPack_rgr_BAAAR_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(200Rnd_65x39_cased_Box_Tracer_Red,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(muzzle_snds_H,1);
	};
};
class B_TacticalPack_rgr_BAMedic_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_rgr_BALAT_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_TacticalPack_rgr_BARepair_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_TacticalPack_rgr_BAReconMedic_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
        SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};
class B_TacticalPack_rgr_BAReconLAT_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};