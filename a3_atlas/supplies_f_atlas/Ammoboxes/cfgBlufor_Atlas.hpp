class Box_E_NATO_Wps_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.23;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.07;
		verticalOffsetWorld = 0;
	};
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_Syndicate_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_E_NATO_Wps_F0;
	model = "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Proxy_GerBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(20Rnd_762x51_Mag,3);
		mag_xx(30Rnd_556x45_Stanag_red,4);
		mag_xx(150Rnd_556x45_Drum_Mag_F,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,4);
		weap_xx(arifle_G36_GL_F,2);
		weap_xx(arifle_G36C_F,2);
		weap_xx(LMG_Mk200_black_F,2);
		weap_xx(srifle_DMR_03_F,2);
		weap_xx(arifle_SPAR_01_blk_F,3);
		weap_xx(arifle_SPAR_01_GL_blk_F,1);
		weap_xx(arifle_SPAR_02_blk_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
	};
	class TransportItems{};
};
class Box_E_NATO_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_Syndicate_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_E_NATO_Ammo_F0;
	model = "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Proxy_GerBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,48);
		mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_E_NATO_WpsLaunch_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.76;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.18;
		verticalOffsetWorld = 0;
	};
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_Syndicate_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_E_NATO_WpsLaunch_F0;
	model = "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Proxy_GerLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(NLAW_F,3);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_NLAW_F,2);
		weap_xx(launch_B_Titan_olive_F,1);
		weap_xx(launch_I_Titan_short_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,3);
	};
};
class B_E_supplyCrate_F: B_supplyCrate_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_E_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(NLAW_F,3);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
		weap_xx(arifle_G36_GL_F,1);
		weap_xx(arifle_G36C_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(srifle_DMR_03_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_LRCO_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,1);
		item_xx(NVGoggles_INDEP,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,2);
	};
};