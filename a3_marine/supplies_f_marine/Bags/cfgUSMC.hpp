class B_Carryall_cbr_BUSMCAmmo_F: B_Carryall_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,1);
		mag_xx(MRAWS_HEAT_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_AssaultPack_cbr_BUSMCAA_F: B_AssaultPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_AssaultPack_cbr_BUSMCAT_F: B_AssaultPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_Kitbag_cbr_BUSMCEng_F: B_Kitbag_cbr
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
class B_AssaultPack_cbr_BUSMCLAT_F: B_AssaultPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_AssaultPack_cbr_BUSMCMedic_F: B_AssaultPack_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};