class B_T_APC_Tracked_01_cannon_F: B_APC_Tracked_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Tracked_01_cannon_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Crew_F;
	typicalCargo[] = {B_T_Soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
		weap_xx(arifle_MX_SW_khk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};