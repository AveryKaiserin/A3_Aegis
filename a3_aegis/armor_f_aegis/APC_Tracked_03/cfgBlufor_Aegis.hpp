class B_A_APC_tracked_03_base_F: APC_Tracked_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	crew = B_A_crew_F;
	typicalCargo[] = {B_A_Soldier_F};
	side = TWest;
	faction = BLU_A_F;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
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
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
		weap_xx(LMG_Mk200_plain_F,1);
		weap_xx(launch_NLAW_F,1);
	};
};
class B_A_APC_tracked_03_cannon_F: B_A_APC_tracked_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_I_APC_tracked_03_cannon_F0;
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camoNet,
		camoSlat
	};
	textureList[] =
	{
		Olive_01,0,
		Sand_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_sand_CO.paa"
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
class B_A_APC_tracked_03_cannon_tna_F: B_A_APC_tracked_03_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_crew_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] =
	{
		Olive_01,1,
		Sand_01,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_Stripe_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
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
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
		weap_xx(LMG_Mk200_khk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
};
class B_A_APC_tracked_03_cannon_wdl_F: B_A_APC_tracked_03_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_crew_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] =
	{
		Olive_01,1,
		Sand_01,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_Stripe_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
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
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
};