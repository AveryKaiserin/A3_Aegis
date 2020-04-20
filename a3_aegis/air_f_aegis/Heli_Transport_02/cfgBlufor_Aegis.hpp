class B_A_Heli_Transport_02_F: Heli_Transport_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_F.jpg";
	scope = public;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Helicrew_F};
	side = TWest;
	faction = BLU_A_F;
	textureList[] =
	{
		Black,0,
		Blufor,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
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
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_snd_F,2);
	};
};
class B_A_Heli_Transport_02_medevac_F: Heli_Transport_02_medevac_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Helicrew_F};
	textureList[] = {Blufor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
	};
};
class B_A_Heli_Transport_02_tna_F: B_A_Heli_Transport_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Helicrew_tna_F};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_khk_F,2);
	};
};
class B_A_Heli_Transport_02_medevac_tna_F: B_A_Heli_Transport_02_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_medevac_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Helicrew_tna_F};
};
class B_A_Heli_Transport_02_wdl_F: B_A_Heli_Transport_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Helicrew_wdl_F};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_blk_F,2);
	};
};
class B_A_Heli_Transport_02_medevac_wdl_F: B_A_Heli_Transport_02_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_medevac_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Helicrew_wdl_F};
};