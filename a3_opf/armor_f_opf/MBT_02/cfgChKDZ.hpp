class O_E_MBT_02_cannon_F: O_R_MBT_02_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_MBT_02_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_E_F;
	crew = O_E_Crew_F;
	typicalCargo[] =
	{
		O_E_Soldier_1_F,
		O_E_Soldier_1_F,
		O_E_Soldier_1_F
	};
	textureList[] = {Green,1};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_Mag_Green_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AKS_F,2);
	};
};