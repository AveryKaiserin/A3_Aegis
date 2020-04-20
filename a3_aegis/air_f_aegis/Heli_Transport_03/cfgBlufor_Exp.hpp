class B_T_Heli_Transport_03_F: B_Heli_Transport_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};
	class Turrets: Turrets
	{
		class CopilotTurret;
		class MainTurret: MainTurret
		{
		    gunnerType = B_T_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_T_Helicrew_F;
		};
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class B_T_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeGarage = private;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};