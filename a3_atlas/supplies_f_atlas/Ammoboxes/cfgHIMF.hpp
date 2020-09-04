class Box_HIL_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_HIL_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_HIL_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(20Rnd_762x51_weathered_Mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,4);
		weap_xx(arifle_G36_GL_F,2);
		weap_xx(arifle_G36C_F,2);
		weap_xx(LMG_03_F,2);
		weap_xx(srifle_DMR_06_hunter_F,2);
	};
	class TransportItems{};
};
class Box_HIL_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_HIL_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_HIL_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,48);
		mag_xx(200Rnd_556x45_Box_Red_F,6);
		mag_xx(20Rnd_762x51_weathered_Mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_HIL_WpsLaunch_F: ReammoBox_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_HIL_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_HIL_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_MRAWS_olive_rail_F,2);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Fieldpack_oli,3);
	};
};
class H_supplyCrate_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.58;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\H_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_H_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\supplydrop_CO.paa"};
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
	class TransportMagazines
	{
		mag_xx(7Rnd_45ACP_Mag,6);
		mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Red,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
		mag_xx(20Rnd_762x51_weathered_Mag,6);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		mag_xx(chemlight_yellow,6);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareYellow_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
		weap_xx(arifle_G36_GL_F,1);
		weap_xx(arifle_G36C_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(srifle_DMR_06_hunter_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_MRCO,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_03_F_blk,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Fieldpack_oli,2);
	};
};