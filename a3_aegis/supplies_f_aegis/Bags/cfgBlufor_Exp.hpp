// Arma 3 Apex
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
// Arma 3 Tanks
class B_AssaultPack_rgr_BTLAT2_F: B_AssaultPack_tna_F{};
// Arma 3 Aegis
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