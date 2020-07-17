class L_supplyCrate_F: ReammoBox_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\L_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_L_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
	class TransportMagazines
	{
		mag_xx(11Rnd_45ACP_Mag,6);
		mag_xx(50Rnd_570x28_SMG_03,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,30);
        mag_xx(6Rnd_12Gauge_Pellets,3);
        mag_xx(6Rnd_12Gauge_Slug,3);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_blue,6);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
		weap_xx(arifle_MSBS65_Mark_black_F,1);
		weap_xx(arifle_MSBS65_GL_black_F,1);
		weap_xx(arifle_MSBS65_UBS_black_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_Holosight_blk_F,1);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_ico_01_black_f,1);
		item_xx(optic_DMS,1);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,3);
		item_xx(NVGoggles_INDEP,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_sgg,2);
	};
};