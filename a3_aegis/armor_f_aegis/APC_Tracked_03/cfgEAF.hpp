class I_E_APC_tracked_03_cannon_v2_F: APC_Tracked_03_base_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_APC_tracked_03_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Crew_F;
	typicalCargo[] = {I_E_Crew_F};
	textureList[] = {EAF_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Enoch\APC_Tracked_03\Data\APC_Tracked_03_ext_EAF_CO.paa",
		"\A3\Armor_F_Enoch\APC_Tracked_03\Data\APC_Tracked_03_ext2_EAF_CO.paa",
		"\A3\Armor_F_Enoch\APC_Tracked_03\Data\camonet_EAF_green_CO.paa",
		"\A3\Armor_F_Enoch\APC_Tracked_03\Data\cage_EAF_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
		mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics{};
            };
            magazines[] =
            {
                mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
                mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
                mag_10(200Rnd_762x51_Belt_Red)
            };
		};
	};
};