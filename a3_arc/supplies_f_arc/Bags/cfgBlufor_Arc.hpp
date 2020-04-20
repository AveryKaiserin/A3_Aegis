class B_AssaultPack_arc_AA_F: B_AssaultPack_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_AssaultPack_arc_AT_F: B_AssaultPack_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_AssaultPack_arc_LAT_F: B_AssaultPack_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_AssaultPack_arc_Medic_F: B_AssaultPack_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_arc_Repair_F: B_AssaultPack_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_Kitbag_arc_AAR_F: B_Kitbag_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
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
class B_Kitbag_arc_Eng_F: B_Kitbag_arc_F
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
class B_Kitbag_arc_Exp_F: B_Kitbag_arc_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,3);
		mag_xx(SatchelCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};