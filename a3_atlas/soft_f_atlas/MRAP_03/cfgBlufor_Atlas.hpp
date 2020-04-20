class B_E_MRAP_03_F: MRAP_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_MRAP_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Soldier_F;
	typicalCargo[] = {B_E_Soldier_F};
	textureList[] =
	{
		Blufor,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_65x39_cased_box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(MRAWS_HEAT_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};
class B_E_MRAP_03_hmg_F: MRAP_03_hmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_MRAP_03_hmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Soldier_F;
	typicalCargo[] = {B_E_Soldier_F};
	textureList[] =
	{
		Blufor,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
		};
		class CommanderTurret: CommanderTurret{};
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_65x39_cased_box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(MRAWS_HEAT_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};
class B_E_MRAP_03_gmg_F: MRAP_03_gmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_MRAP_03_gmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Soldier_F;
	typicalCargo[] = {B_E_Soldier_F};
	textureList[] =
	{
		Blufor,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_65x39_cased_box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(MRAWS_HEAT_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};