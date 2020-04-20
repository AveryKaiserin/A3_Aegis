class O_W_Heli_Attack_02_dynamicLoadout_F: O_Heli_Attack_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Heli_Attack_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_W_F;
	crew = O_W_Helipilot_F;
	typicalCargo[] = {O_W_Helipilot_F};
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_ghex_CO.paa"
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