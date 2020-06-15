class B_Carryall_cbr_Ammo: B_Carryall_cbr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,6);
		mag_xx(200Rnd_556x45_Box_Red_F,1);
		mag_xx(MRAWS_HEAT_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_Mag,2);
	};
};
class B_Carryall_cbr_Mine: B_Carryall_cbr
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
class B_AssaultPack_khk_AAR: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1);
	};
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(muzzle_snds_H,1);
	};
};
class B_AssaultPack_khk_LAT: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT_F,2);
		mag_xx(MRAWS_HE_F,1);
	};
};
class B_AssaultPack_khk_Medic: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_AssaultPack_khk_Repair: B_AssaultPack_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};
class B_Kitbag_khk_AA: B_Kitbag_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_Kitbag_khk_AT: B_Kitbag_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_Kitbag_khk_Eng: B_Kitbag_khk
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
class B_Kitbag_khk_Exp: B_Kitbag_khk
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(APERSBoundingMine_Range_Mag,3);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
		mag_xx(SLAMDirectionalMine_Wire_Mag,2);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};