class O_W_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_W_F;
	crew = O_W_Helipilot_F;
	typicalCargo[] = {O_W_Helipilot_F};
	textureList[] =
	{
		Black,0,
		Blackcustom,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
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
class O_W_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeGarage = private;
	displayName = $STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0;
	accuracy = 1.5;
	cost = 900000;
	threat[] = {0.3,0.2,0.3};
	radarType = CM_Lock_Radar;
	side = TEast;
	faction = OPF_W_F;
	crew = O_W_Helipilot_F;
	typicalCargo[] = {O_W_Helipilot_F};
	textureList[] =
	{
		Black,1,
		Blackcustom,0,
		GreenHex,0
	};
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
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