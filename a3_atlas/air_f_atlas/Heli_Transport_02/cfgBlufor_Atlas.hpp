class B_E_Heli_Transport_02_F: Heli_Transport_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Heli_Transport_02_F.jpg";
	scope = public;
	crew = B_E_Helipilot_F;
	typicalCargo[] = {B_E_Helicrew_F};
	side = TWest;
	faction = BLU_E_F;
	textureList[] = {Woodland,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
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
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
};