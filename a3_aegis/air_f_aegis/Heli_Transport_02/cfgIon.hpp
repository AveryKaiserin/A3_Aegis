class B_ION_Heli_Transport_02_F: Heli_Transport_02_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Heli_Transport_02_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_C_IDAP_Heli_Transport_02_F0;
	crew = B_ION_helipilot_F;
	typicalCargo[] = {B_ION_helipilot_F};
	side = TWest;
	faction = BLU_ION_F;
	textureList[] = {ION,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ION_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ION_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_ION_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
	};
	availableForSupportTypes[] =
	{
		Drop,
		Transport
	};
	cost = 800000;
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};