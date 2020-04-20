class O_R_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_02_rcws_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_APC_Wheeled_02_rcws_v2_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] = {O_R_Crew_F};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUS_CO.paa",
		"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
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