class B_Carryall_oli_BNAmmo_F: B_Carryall_oli
{
	author = $STR_A3_A_Heliotrope;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_stanag,6);
		mag_xx(200Rnd_65x39_cased_Box,1);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,2);
		mag_xx(MiniGrenade,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(20Rnd_Mk14_762x51_Mag,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
	};
};
class B_Carryall_oli_BNEng_F: B_Carryall_oli
{
	author = $STR_A3_A_Heliotrope;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(HandGrenade,1);
		mag_xx(DemoCharge_Remote_Mag,1);
	};
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};
class B_TacticalPack_oli_BNMedic_F: B_TacticalPack_oli
{
	author = $STR_A3_A_Heliotrope;
	scope = protected;
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};
class B_TacticalPack_oli_BNLAT_F: B_TacticalPack_oli
{
	author = $STR_A3_A_Heliotrope;
	scope = protected;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(MRAWS_HE_F,3);
	};
};