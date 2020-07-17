// Arma 3 Aegis
class V_supplyCrate_F: ReammoBox_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\V_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_V_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_OPFOR_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_green,24);
		mag_xx(10Rnd_50BW_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(chemlight_red,6);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,1);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(UGL_FlareRed_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_ARX_hex_F,4);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_02,1);
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_ARCO,1);
		item_xx(optic_DMS,1);
		item_xx(optic_Nightstalker,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_02_F_hex,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_ViperHarness_hex_F,2);
	};
};
class V_T_supplyCrate_F: ReammoBox_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\V_T_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_V_T_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_T_OPFOR_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_green,24);
		mag_xx(10Rnd_50BW_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(chemlight_red,6);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,1);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(UGL_FlareRed_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_ARX_ghex_F,4);
		weap_xx(launch_RPG32_ghex_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_ARCO_ghex_F,1);
		item_xx(optic_DMS_ghex_F,1);
		item_xx(optic_Nightstalker,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_02_F_hex,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_ViperHarness_ghex_F,2);
	};
};