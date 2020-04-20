class B_A_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_dynamicLoadout_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
	hiddenSelections[] =
	{
		camo,
		ammobox,
		ammobox_sign
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BLUFOR_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa",
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
	};
	textureList[] =
	{
		Blufor,1,
		Grey,0
	};
	magazines[] =
	{
		5000Rnd_762x51_Belt,
		168Rnd_CMFlare_Chaff_Magazine
	};
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
class B_A_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_unarmed_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BLUFOR_CO.paa"};
	textureList[] =
	{
		Blufor,1,
		Grey,0
	};
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
class B_A_Heli_light_03_dynamicLoadout_tna_F: B_A_Heli_light_03_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_dynamicLoadout_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
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
class B_A_Heli_light_03_unarmed_tna_F: B_A_Heli_light_03_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_unarmed_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
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
class B_A_Heli_light_03_dynamicLoadout_wdl_F: B_A_Heli_light_03_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_dynamicLoadout_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
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
class B_A_Heli_light_03_unarmed_wdl_F: B_A_Heli_light_03_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_unarmed_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
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