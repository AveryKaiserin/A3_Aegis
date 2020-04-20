class B_USMC_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Heli_Attack_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_USMC_F;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
	textureList[] = {Grey,1};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_grey_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};