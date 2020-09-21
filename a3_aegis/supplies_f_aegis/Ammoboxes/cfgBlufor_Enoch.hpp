class Box_W_NATO_Equip_F: Box_NATO_Equip_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Equip_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
    };
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
        item_xx(V_BandollierB_rgr,2);
        item_xx(V_Chestrig_rgr,1);
        item_xx(V_ChestrigF_rgr,1);
        item_xx(V_TacVest_grn,2);
        item_xx(V_TacVest_blk,4);
        item_xx(V_PlateCarrier1_wdl,2);
        item_xx(V_PlateCarrier2_wdl,2);
        item_xx(V_PlateCarrierGL_wdl,2);
        item_xx(V_PlateCarrierSpec_wdl,2);
        item_xx(H_Cap_usblack,1);
        item_xx(H_Cap_usblack_hs,1);
        item_xx(H_MilCap_wdl,2);
        item_xx(H_Booniehat_wdl,1);
        item_xx(H_Booniehat_wdl_hs,1);
        item_xx(H_Beret_02,2);
		item_xx(H_HelmetB_light_wdl,2);
		item_xx(H_HelmetSpecB_light_wdl,2);
		item_xx(H_HelmetB_wdl,5);
		item_xx(H_HelmetSpecB_wdl,5);
        item_xx(H_HelmetCrew_B_oli_F,2);
        item_xx(H_PilotHelmetFighter_B,2);
        item_xx(H_PilotHelmetHeli_B,2);
        item_xx(H_CrewHelmetHeli_B,2);
    };
	class TransportBackpacks{};
};
class Box_W_NATO_Uniforms_F: Box_NATO_Uniforms_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Uniforms_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
    };
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
        item_xx(U_B_CombatUniform_mcam_wdl_f,4);
        item_xx(U_B_CombatUniform_tshirt_mcam_wdL_f,4);
        item_xx(U_B_CombatUniform_vest_mcam_wdl_f,4);
        item_xx(U_B_HeliPilotCoveralls,4);
        item_xx(U_B_PilotCoveralls,2);
        item_xx(U_B_GhillieSuit_wdl_f,2);
		item_xx(U_B_W_FullGhillie_wdl_F,2);
    };
};
class Box_W_NATO_Wps_F: Box_NATO_Wps_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Wps_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };
    class TransportMagazines
    {
		mag_xx(30Rnd_65x39_caseless_black_mag,9);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(100Rnd_65x39_caseless_black_mag,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MX_Black_F,4);
        weap_xx(arifle_MX_GL_Black_F,2);
        weap_xx(arifle_MX_SW_Black_F,2);
        weap_xx(arifle_MXC_Black_F,2);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(LMG_Mk200_black_F,1);
        weap_xx(SMG_01_black_F,1);
        weap_xx(hgun_P07_blk_F,1);
        weap_xx(hgun_Pistol_heavy_01_black_F,1);
    };
    class TransportItems
    {
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(optic_MRD_black,1);
    };
};
class Box_W_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(7Rnd_408_mag,6);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_LRR_F,1);
		weap_xx(srifle_DMR_03_F,1);
		weap_xx(srifle_EBR_blk_F,1);
		weap_xx(MMG_02_black_F,1);
		weap_xx(sgun_KSG_F,1);
        weap_xx(arifle_SPAR_01_blk_F,3);
        weap_xx(arifle_SPAR_01_GL_blk_F,1);
        weap_xx(arifle_SPAR_02_blk_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(optic_DMS,1);
        item_xx(optic_LRPS,1);
		item_xx(optic_AMS,1);
	};
};
class Box_W_NATO_Ammo_F: Box_NATO_Ammo_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Ammo_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,54);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(11Rnd_45ACP_Mag,2);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_W_NATO_Support_F: Box_NATO_Support_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Support_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Support_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
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
		item_xx(B_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_b,5);
		item_xx(muzzle_snds_H,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_M,5);
		item_xx(muzzle_snds_338_black,2);
		item_xx(muzzle_snds_408_black,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(bipod_01_F_blk,5);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_wdl_F,2);
		bag_xx(B_RadioBag_01_wdl_F,2);
	};
};
class Box_W_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_WpsLaunch_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_WpsLaunch_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_olive_F,1);
		weap_xx(launch_I_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_green_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_wdl_F,4);
	};
};
class B_W_supplyCrate_F: B_supplyCrate_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_supplyCrate_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_B_W_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_NATO_Woodland;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,30);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
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
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_GL_Black_F,1);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(arifle_MXC_Black_F,1);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
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
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};