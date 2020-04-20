class O_A_APC_Wheeled_02_rcws_v2_F: O_APC_Wheeled_02_rcws_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Wheeled_02_rcws_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_crew_F;
	typicalCargo[] = {O_A_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,12);
		mag_xx(100Rnd_580x42_Mag_F,8);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(RPG32_F,5);
		mag_xx(RPG32_HE_F,2);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AA,2);
	};
};