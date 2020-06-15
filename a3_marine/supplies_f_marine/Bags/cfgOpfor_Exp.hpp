class B_Carryall_blk_OTAmmo_F: B_Carryall_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,6);
		mag_xx(100Rnd_580x42_Mag_F,1);
		mag_xx(RPG32_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_FieldPack_blk_OTAA_F: B_FieldPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_FieldPack_blk_OTAT_F: B_FieldPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_Carryall_blk_OTEng_F: B_Carryall_blk
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
class B_FieldPack_blk_OTLAT_F: B_FieldPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
	};
};
class B_AssaultPack_blk_OTMedic_F: B_AssaultPack_blk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};