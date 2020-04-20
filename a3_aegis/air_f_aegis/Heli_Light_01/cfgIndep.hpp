class I_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Heli_Light_01_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_F;
	crew = I_helipilot_F;
	cost = 7000000;
	textureList[] = {Indep,1};
	hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
	};
};
class I_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Heli_Light_01_dynamicLoadout_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = IND_F;
	crew = I_helipilot_F;
	cost = 1000000;
	textureList[] = {Indep,1};
	hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
	};
};
class I_Heli_Light_01_recon_F: Heli_Light_01_recon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Heli_Light_01_recon_F.jpg";
	scope = public;
	forceInGarage = true;
	side = TGuerrila;
	faction = IND_F;
	crew = I_helipilot_F;
	textureList[] = {Indep,1};
	hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
	};
};