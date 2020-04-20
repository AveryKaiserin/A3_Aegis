class B_Carryall_oli_IIAmmo_F: B_Carryall_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6);
		mag_xx(150Rnd_762x51_Box_Yellow,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_Mag,2);
	};
};
class B_AssaultPack_sgg_IILAT_F: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_AssaultPack_sgg_IIMedic_F: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Kitbag_sgg_IIEng_F: B_Kitbag_sgg
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
class B_TacticalPack_sgg_IIAA_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_TacticalPack_sgg_IIAT_F: B_Kitbag_sgg
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};