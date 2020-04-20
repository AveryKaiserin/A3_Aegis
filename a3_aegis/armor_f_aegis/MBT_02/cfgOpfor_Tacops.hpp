class O_A_MBT_02_cannon_F: O_MBT_02_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MBT_02_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_crew_F;
	typicalCargo[] =
	{
		O_A_soldier_F,
		O_A_soldier_F,
		O_A_soldier_F
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
};