class B_USMC_Heli_Transport_01_F: B_Heli_Transport_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Heli_Transport_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_USMC_F;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_USMC_Soldier_F};
	textureList[] = {Grey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_grey_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext02_grey_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_F,2);
	};
};