// Arma 3 Enoch
class B_Kitbag_rgr_BWAAR: B_Kitbag_wdl_F
{
	class TransportMagazines
	{
		mag_xx(100Rnd_65x39_caseless_black_mag,2);
		mag_xx(100Rnd_65x39_caseless_black_mag_Tracer,2);
		mag_xx(130Rnd_338_Mag,2);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(muzzle_snds_338_black,1);
		item_xx(muzzle_snds_H,1);
	};
};
// Arma 3 Aegis
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