// Arma 3 Aegis
class Box_A_East_Wps_F: ReammoBox_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_East_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_East_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_African;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(100Rnd_580x42_Mag_F,2);
		mag_xx(20Rnd_650x39_Cased_Mag_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,6);
		weap_xx(arifle_CTAR_GL_blk_F,2);
		weap_xx(arifle_CTARS_blk_F,2);
		weap_xx(srifle_DMR_07_blk_F,2);
	};
	class TransportItems{};
};
class Box_A_East_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_East_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_East_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_African;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,48);
		mag_xx(100Rnd_580x42_Mag_F,16);
		mag_xx(20Rnd_650x39_Cased_Mag_F,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_A_East_WpsLaunch_F: ReammoBox_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_East_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_East_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_African;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG32_F,2);
		weap_xx(launch_O_Titan_F,1);
		weap_xx(launch_O_Titan_short_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ocamo,3);
	};
};
class O_A_supplyCrate_F: O_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_A_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_OPFOR_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_CSAT_African;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_580x42_Mag_F,24);
		mag_xx(100Rnd_580x42_Mag_F,8);
		mag_xx(20Rnd_650x39_Cased_Mag_F,6);
		mag_xx(10Rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,3);
		weap_xx(arifle_CTAR_GL_blk_F,1);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(srifle_DMR_07_blk_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn,2);
		item_xx(optic_Arco_blk_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_ocamo,2);
	};
};