class O_W_APC_Tracked_02_cannon_F: O_T_APC_Tracked_02_cannon_ghex_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_APC_Tracked_02_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_W_F;
	crew = O_W_Crew_F;
	typicalCargo[] = {O_W_Soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
		weap_xx(arifle_RPK12_F,2);
		weap_xx(launch_RPG32_ghex_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_black_Mag_F,12);
		mag_xx(75Rnd_762x39_AK12_Mag_F,8);
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