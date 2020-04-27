class I_I_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Heli_Attack_01_dynamicLoadout_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_Heli_Attack_01_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_helipilot_F;
	typicalCargo[] = {I_I_helipilot_F};
	textureList[] = {IDF,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Attack_01\Data\Heli_Attack_01_IDF_CO.paa"};
	accuracy = 2.5;
	availableForSupportTypes[] = {CAS_Heli};
	class Library
	{
		libTextDesc = $STR_A3_Heli_Attack_01_lib;
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				500Rnd_20mm_shells_yellow,
				Laserbatteries
			};
		};
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
};