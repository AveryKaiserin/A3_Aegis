class B_Carryall_green_BEAmmo_F: B_Carryall_green_F
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
class B_TacticalPack_rgr_BELAT_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_TacticalPack_rgr_BEMedic_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_rgr_BEReconMedic_F: B_TacticalPack_rgr
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,1);
		mag_xx(SmokeShellBlue,1);
		mag_xx(SmokeShellOrange,1);
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Carryall_mcamo_BEAmmo_F: B_Carryall_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(MRAWS_HEAT_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_762x51_Mag,2);
	};
};
class B_Kitbag_mcamo_BEEng_F: B_Kitbag_mcamo
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
class B_TacticalPack_mcamo_BEAA_F: B_Kitbag_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AA,2);
	};
};
class B_TacticalPack_mcamo_BEAT_F: B_Kitbag_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(Titan_AT,2);
	};
};
class B_TacticalPack_mcamo_BELAT_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(NLAW_F,2);
	};
};
class B_TacticalPack_mcamo_BEMedic_F: B_TacticalPack_mcamo
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};