// Arma 3 Apex
class Box_T_East_Wps_F: Box_East_Wps_F
{
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
  	class TransportMagazines
  	{
		mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(100Rnd_580x42_Mag_F,2);
		mag_xx(20Rnd_650x39_Cased_Mag_F,1);
    	delete _xx_16Rnd_9x21_Mag;
		mag_xx(17Rnd_9x21_Mag,1);
    	delete _xx_30Rnd_9x21_Mag;
		mag_xx(30Rnd_9x21_Mag_SMG_02,1);
		mag_xx(6Rnd_45ACP_Cylinder,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,6);
		weap_xx(arifle_CTAR_GL_blk_F,2);
		weap_xx(arifle_CTARS_blk_F,2);
		weap_xx(srifle_DMR_07_blk_F,1);
		weap_xx(SMG_02_F,1);
		weap_xx(hgun_Rook40_F,1);
		weap_xx(hgun_Pistol_heavy_02_F,1);
 	};
  	class TransportItems
    {
		item_xx(optic_ACO_grn,2);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_DMS,1);
		item_xx(optic_Yorris_F,1);
    };
};
class Box_T_East_Ammo_F: Box_East_Ammo_F
{
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,48);
		mag_xx(100Rnd_580x42_Mag_F,16);
		mag_xx(20Rnd_650x39_Cased_Mag_F,6);
		delete _xx_10Rnd_50BW_Mag_F;
		delete _xx_30Rnd_65x39_caseless_green;
		delete _xx_16Rnd_9x21_Mag;
		mag_xx(17Rnd_9x21_Mag,2);
    	delete _xx_30Rnd_9x21_Mag;
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(6Rnd_45ACP_Cylinder,2);
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_RPG32_F;
		delete _xx_HandGrenade;
		delete _xx_MiniGrenade;
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_East_WpsSpecial_F: Box_East_WpsSpecial_F
{
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(5Rnd_127x108_Mag,4);
		mag_xx(5Rnd_127x108_APDS_Mag,4);
		delete _xx_20Rnd_650x39_Cased_Mag_F;
		mag_xx(20Rnd_556x45_UW_mag,3);
		delete _xx_30Rnd_556x45_Stanag_green;
		mag_xx(20Rnd_556x45_Stanag_green,3);
		mag_xx(10Rnd_127x54_Mag,6);
		mag_xx(10Rnd_93x64_DMR_05_Mag,6);
		mag_xx(150Rnd_93x64_Mag,3);
		mag_xx(10Rnd_50BW_Mag_F,12);
		mag_xx(30Rnd_65x39_caseless_green,24);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_GM6_ghex_F,1);
		weap_xx(arifle_SDAR_F,1);
		delete _xx_srifle_DMR_07_blk_F;
		weap_xx(srifle_DMR_04_F,1);
		delete _xx_srifle_DMR_05_hex_F;
		weap_xx(srifle_DMR_05_blk_F,1);
		delete _xx_MMG_01_hex_F;
		weap_xx(MMG_01_ghex_F,1);
		weap_xx(sgun_AA40_F,1);
		weap_xx(arifle_ARX_ghex_F,4);
	};
	class TransportItems
	{
		delete _xx_optic_ACO_grn;
		delete _xx_optic_ACO_grn_smg;
    	delete _xx_optic_MRCO;
		item_xx(optic_Arco_ghex_F,2);
    	delete _xx_optic_SOS;
		item_xx(optic_Nightstalker,5);
    	delete _xx_optic_TWS;
    	delete _xx_optic_TWS_MG;
    	delete _xx_optic_Yorris;
		item_xx(optic_DMS_ghex_F,1);
    	item_xx(optic_LRPS_ghex_F,1);
		item_xx(optic_KHS_blk,1);
    	delete _xx_optic_KHS_hex;
    	delete _xx_optic_KHS_tan;
	};
};
// Arma 3 Aegis
class Box_T_CSAT_Equip_F: Box_CSAT_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_CSAT_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_T_CSAT_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_ghex_F,2);
		item_xx(V_HarnessO_ghex_F,4);
		item_xx(V_HarnessOGL_ghex_F,2);
		item_xx(V_HarnessOSpec_ghex_F,2);
		item_xx(V_BandollierB_ghex_F,2);
		item_xx(V_TacVest_oli,2);
		item_xx(H_HelmetSpecO_blk,2);
		item_xx(H_HelmetSpecO_ghex_F,2);
		item_xx(H_HelmetLeaderO_ghex_F,5);
		item_xx(H_HelmetO_ghex_F,5);
		item_xx(H_HelmetCrew_O_ghex_F,2);
		item_xx(H_Booniehat_ghex_F,1);
		item_xx(H_Booniehat_ghex_hs_F,1);
		item_xx(H_MilCap_ghex_F,2);
		item_xx(H_Beret_CSAT_01_F,2);
		item_xx(H_PilotHelmetFighter_O,2);
		item_xx(H_PilotHelmetHeli_O,2);
		item_xx(H_CrewHelmetHeli_O,2);
		item_xx(V_TacChestrig_oli_F,2);
		item_xx(G_O_Diving,2);
		item_xx(V_RebreatherIR,2);
	};
	class TransportBackpacks{};
};
class Box_T_CSAT_Uniforms_F: Box_CSAT_Uniforms_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_CSAT_Uniforms_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_T_CSAT_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_OPFOR_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_O_T_Soldier_F,4);
		item_xx(U_O_T_Officer_F,2);
		item_xx(U_O_T_officer_noInsignia_ghex_F,2);
		item_xx(U_O_T_Pilot_F,8);
		item_xx(U_O_T_Sniper_F,2);
		item_xx(U_O_T_FullGhillie_tna_F,2);
		item_xx(U_O_T_Diver_F,2);
	};
};
class Box_T_East_AmmoOrd_F: Box_East_AmmoOrd_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,0},
			{grenades_hide,1},
			{support_hide,1}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_AmmoOrd_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_East_AmmoOrd_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSMineDispenser_Mag,1);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_East_Grenades_F: Box_East_Grenades_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,1},
			{grenades_hide,0},
			{support_hide,1}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_Grenades_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_East_Grenades_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade_East,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(SmokeShellYellow,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareYellow_F,2);
        mag_xx(UGL_FlareRed_F,2);
        mag_xx(O_IR_Grenade,8);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_East_Support_F: Box_East_Support_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,1},
			{grenades_hide,1},
			{support_hide,0}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_Support_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_East_Support_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(O_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_65_TI_blk_F,5);
		item_xx(muzzle_snds_65_TI_ghex_F,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_58_blk_F,5);
		item_xx(muzzle_snds_93mmg,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_58_F,5);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(bipod_02_F_blk,3);
		item_xx(bipod_02_F_hex,2);
		item_xx(O_NVGoggles_blk_F,1);
		item_xx(O_NVGoggles_ghex_F,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_ghex_F,2);
		bag_xx(B_RadioBag_01_ghex_F,2);
	};
};
class Box_T_East_WpsLaunch_F: Box_East_WpsLaunch_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.15;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_East_WpsLaunch_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Vorona_HEAT,1);
		mag_xx(Vorona_HE,1);
	};
	class TransportWeapons
	{
		weap_xx(launch_O_Titan_ghex_F,1);
		weap_xx(launch_O_Titan_short_ghex_F,1);
		weap_xx(launch_RPG32_ghex_F,1);
		weap_xx(launch_O_Vorona_green_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ghex_F,4);
	};
};
class Box_T_East_AmmoVeh_F: Box_East_AmmoVeh_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.79;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_AmmoVeh_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_East_AmmoVeh_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_East_AmmoVeh_F_CO.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
};
class O_T_supplyCrate_F: O_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_T_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_CSAT_Pacific;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_Viper_CO.paa"};
	class TransportMagazines
	{
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(30Rnd_580x42_Mag_F,24);
		mag_xx(20Rnd_650x39_Cased_Mag_F,6);
		mag_xx(100Rnd_580x42_Mag_F,8);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(chemlight_red,2);
		mag_xx(O_IR_Grenade,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Laserbatteries,1);
        mag_xx(HandGrenade_East,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(UGL_FlareRed_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,3);
		weap_xx(arifle_CTAR_GL_blk_F,1);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(srifle_DMR_07_blk_F,1);
		weap_xx(launch_RPG32_ghex_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_DMS,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_02_F_blk,2);
		item_xx(bipod_02_F_hex,3);
		item_xx(O_NVGoggles_blk_F,1);
		item_xx(O_NVGoggles_ghex_F,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ghex_F,2);
	};
};