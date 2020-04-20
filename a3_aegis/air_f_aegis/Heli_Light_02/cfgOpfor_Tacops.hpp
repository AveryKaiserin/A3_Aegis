class O_A_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_Helipilot_F;
	typicalCargo[] = {O_A_Helipilot_F};
	textureList[] =
	{
		Opfor,1,
		Black,0,
		Blackcustom,0
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
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
class O_A_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_Helipilot_F;
	typicalCargo[] = {O_A_Helipilot_F};
	textureList[] =
	{
		Opfor,0,
		Black,1,
		Blackcustom,0
	};
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
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