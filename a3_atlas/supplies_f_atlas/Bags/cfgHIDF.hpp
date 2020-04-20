class B_Carryall_oli_HIDFAmmo_F: B_Carryall_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_556x45_Box_Red_F,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Fieldpack_oli_HIDFMedic_F: B_Fieldpack_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_Fieldpack_oli_HIDFEng_F: B_Fieldpack_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_Fieldpack_oli_HIDFLAT_F: B_Fieldpack_oli
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,2);
		mag_xx(MRAWS_HE_F,2);
	};
};