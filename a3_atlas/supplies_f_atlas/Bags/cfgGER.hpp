class B_Carryall_wdl_BEAmmo_F: B_Carryall_flecktarn
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(NLAW_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_Mag,2);
	};
};
class B_Kitbag_wdl_BEAAR_F: B_Kitbag_flecktarn
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(200Rnd_65x39_cased_Box_Tracer_Red,1);
		mag_xx(150Rnd_93x64_Mag_Red,2);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(muzzle_snds_H,1);
	};
};
class B_TacticalPack_rgr;;
class B_TacticalPack_rgr_BEReconMG_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(150Rnd_93x64_Mag_Red,2);
	};
};