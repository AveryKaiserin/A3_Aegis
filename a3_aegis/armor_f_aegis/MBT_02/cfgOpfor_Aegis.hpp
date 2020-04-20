class O_W_MBT_02_cannon_F: O_T_MBT_02_cannon_ghex_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_MBT_02_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_W_F;
	crew = O_W_Crew_F;
	typicalCargo[] =
	{
		O_W_Soldier_F,
		O_W_Soldier_F,
		O_W_Soldier_F
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_black_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};
};