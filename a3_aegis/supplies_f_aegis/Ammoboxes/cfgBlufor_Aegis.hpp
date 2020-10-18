// BLU_A_F
class Box_A_NATO_Equip_F: Box_NATO_Equip_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_cbr,2);
		item_xx(V_BandollierB_cbr,2);
		item_xx(V_TacChestrig_cbr_F,2);
		item_xx(V_CarrierRigKBT_01_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_light_Coyote_F,4);
		item_xx(V_PlateCarrierH_CTRG,2);
		item_xx(V_PlateCarrierL_CTRG,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_mcamo,1);
		item_xx(H_Booniehat_mcamo_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light_desert,1);
		item_xx(H_HelmetB_light_snakeskin,1);
		item_xx(H_HelmetSpecB_light_desert,1);
		item_xx(H_HelmetSpecB_light_snakeskin,1);
		item_xx(H_HelmetB_sand,2);
		item_xx(H_HelmetSpecB_sand,2);
		item_xx(H_HelmetB_camo_mcamo,8);
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_O,2);
		item_xx(H_CrewHelmetHeli_O,2);
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_F: Box_NATO_Uniforms_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_mtp_f,8);
		item_xx(U_B_UBACS_tshirt_mtp_f,4);
		item_xx(U_B_UBACS_vest_mtp_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_FullGhillie_ard,1);
		item_xx(U_B_FullGhillie_lsh,1);
		item_xx(U_B_FullGhillie_sard,1);
		item_xx(U_B_Wetsuit,2);
  	};
};
class Box_A_NATO_Wps_F: Box_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_snd_F,4);
		weap_xx(arifle_SA80_C_snd_F,2);
		weap_xx(arifle_SA80_GL_snd_F,2);
		weap_xx(LMG_Mk200_plain_F,2);
		weap_xx(srifle_DMR_02_sniper_F,1);
		weap_xx(SMG_04_snd_F,1);
		weap_xx(hgun_G17_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_AMS_snd,1);
	};
};
class Box_A_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_mag,30);
        mag_xx(100Rnd_65x39_caseless_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_camo_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_F,2);
		weap_xx(arifle_MX_GL_F,1);
		weap_xx(arifle_MXC_F,1);
		weap_xx(arifle_MXM_F,1);
		weap_xx(arifle_MX_SW_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
	};
};
class Box_A_NATO_Ammo_F: Box_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_F: B_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_British;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
		weap_xx(arifle_SA80_C_snd_F,1);
		weap_xx(arifle_SA80_GL_snd_F,1);
		weap_xx(LMG_Mk200_plain_F,1);
		weap_xx(srifle_DMR_02_sniper_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_AMS_snd,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_snd,2);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_mcamo,2);
	};
};
// BLU_A_tna_F
class Box_A_NATO_Equip_tropic_F: Box_A_NATO_Equip_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_tna_F,2);
		item_xx(V_BandollierB_tna_F,2);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,4);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_tna_F,1);
		item_xx(H_Booniehat_tna_hs_F,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_Light_tna_F,2);
		item_xx(H_HelmetB_Enh_Light_tna_F,2);
		item_xx(H_HelmetB_tna_F,2);
		item_xx(H_HelmetB_Enh_tna_F,2);
		item_xx(H_HelmetB_Camo_tna_F,8);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_tropic_F: Box_A_NATO_Uniforms_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_tna_f,8);
		item_xx(U_B_UBACS_tshirt_tna_f,4);
		item_xx(U_B_UBACS_vest_tna_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_T_FullGhillie_tna_F,2);
		item_xx(U_B_Wetsuit,2);
  	};
};
class Box_A_NATO_Wps_tropic_F: Box_A_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_khk_F,4);
		weap_xx(arifle_SA80_C_khk_F,2);
		weap_xx(arifle_SA80_GL_khk_F,2);
		weap_xx(LMG_Mk200_khk_F,2);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(SMG_04_khk_F,1);
		weap_xx(hgun_G17_khaki_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_AMS_khk,1);
	};
};
class Box_A_NATO_WpsSpecial_tropic_F: Box_A_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_khaki_mag,30);
        mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_tna_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_khk_F,2);
		weap_xx(arifle_MX_GL_khk_F,1);
		weap_xx(arifle_MXC_khk_F,1);
		weap_xx(arifle_MXM_khk_F,1);
		weap_xx(arifle_MX_SW_khk_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS_tna_F,1);
	};
};
class Box_A_NATO_Ammo_tropic_F: Box_A_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_khaki_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_tropic_F: B_A_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Pacific_British;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
		weap_xx(arifle_SA80_C_khk_F,1);
		weap_xx(arifle_SA80_GL_khk_F,1);
		weap_xx(LMG_Mk200_khk_F,1);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_AMS_khk,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_khk,2);
		item_xx(NVGoggles_tna_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_tna_F,2);
	};
};
// BLU_A_wdl_F
class Box_A_NATO_Equip_wdl_F: Box_A_NATO_Equip_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_rgr,2);
		item_xx(V_BandollierB_rgr,2);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,4);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_wdl,1);
		item_xx(H_Booniehat_wdl_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light_wdl,2);
		item_xx(H_HelmetSpecB_light_wdl,2);
		item_xx(H_HelmetB_plain_wdl,2);
		item_xx(H_HelmetSpecB_wdl,2);
		item_xx(H_HelmetB_camo_wdl,8);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_wdl_F: Box_A_NATO_Uniforms_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_wdl_f,8);
		item_xx(U_B_UBACS_tshirt_wdl_f,4);
		item_xx(U_B_UBACS_vest_wdl_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_W_FullGhillie_wdl_F,2);
  	};
};
class Box_A_NATO_Wps_wdl_F: Box_A_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_blk_F,4);
		weap_xx(arifle_SA80_C_blk_F,2);
		weap_xx(arifle_SA80_GL_blk_F,2);
		weap_xx(LMG_Mk200_black_F,2);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(SMG_04_blk_F,1);
		weap_xx(hgun_G17_black_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_AMS,1);
	};
};
class Box_A_NATO_WpsSpecial_wdl_F: Box_A_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_black_mag,30);
        mag_xx(100Rnd_65x39_caseless_black_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_GL_Black_F,1);
		weap_xx(arifle_MXC_Black_F,1);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(arifle_MX_SW_Black_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
	};
};
class Box_A_NATO_Ammo_wdl_F: Box_A_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_black_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_wdl_F: B_A_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland_British;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
		weap_xx(arifle_SA80_C_blk_F,1);
		weap_xx(arifle_SA80_GL_blk_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_AMS,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,2);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,2);
	};
};