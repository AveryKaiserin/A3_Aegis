// Arma 3
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
// Arma 3 Aegis
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