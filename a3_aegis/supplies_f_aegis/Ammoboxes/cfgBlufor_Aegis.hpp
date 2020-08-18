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
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_A_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_BandollierB_cbr,2);
		item_xx(V_Chestrig_rgr,1);
		item_xx(V_ChestrigF_rgr,1);
		item_xx(V_TacChestrig_cbr_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_light_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_Coyote_F,2);
		item_xx(V_PlateCarrierH_CTRG,2);
		item_xx(V_PlateCarrierL_CTRG,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(V_RebreatherB,2);
		item_xx(H_Booniehat_mcamo,1);
		item_xx(H_Booniehat_mcamo_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light_mcamo,1);
		item_xx(H_HelmetB_light_sand,1);
		item_xx(H_HelmetSpecB_light_mcamo,1);
		item_xx(H_HelmetSpecB_light_sand,1);
		item_xx(H_HelmetB_plain_mcamo,1);
		item_xx(H_HelmetB_sand,1);
		item_xx(H_HelmetSpecB_mcamo,1);
		item_xx(H_HelmetSpecB_sand,1);
		item_xx(H_HelmetB_camo_mcamo,2);
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,4);
        item_xx(G_AirPurifyingRespirator_01_F,4);
  	};
	class TransportBackpacks
	{
    	bag_xx(B_AssaultPack_rgr,1);
    	bag_xx(B_AssaultPack_mcamo,1);
		bag_xx(B_Bergen_mcamo_F,2);
		bag_xx(B_Carryall_mcamo,2);
		bag_xx(B_Kitbag_rgr,1);
		bag_xx(B_Kitbag_mcamo,1);
		bag_xx(B_TacticalPack_mcamo,2);
		bag_xx(B_CombinationUnitRespirator_01_F,2);
	};
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
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_A_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_mtp_f,4);
		item_xx(U_B_UBACS_tshirt_mtp_f,4);
		item_xx(U_B_UBACS_vest_mtp_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_FullGhillie_ard,1);
		item_xx(U_B_FullGhillie_lsh,1);
		item_xx(U_B_FullGhillie_sard,1);
		item_xx(U_B_Wetsuit,2);
		item_xx(U_B_CBRN_Suit_01_MTP_F,2);
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
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(30Rnd_556x45_Stanag_Sand_red,4);
        mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,1);
		mag_xx(20Rnd_762x51_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_snd_F,4);
		weap_xx(arifle_SA80_C_snd_F,2);
		weap_xx(arifle_SA80_GL_snd_F,2);
		weap_xx(LMG_Mk200_plain_F,2);
		weap_xx(srifle_DMR_02_sniper_F,2);
		weap_xx(arifle_SPAR_01_snd_F,3);
		weap_xx(arifle_SPAR_01_GL_snd_F,1);
		weap_xx(arifle_SPAR_02_snd_F,1);
		weap_xx(arifle_SPAR_03_snd_F,1);
		weap_xx(SMG_04_snd_F,1);
		weap_xx(hgun_G17_F,1);
    };
    class TransportItems{};
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
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(5Rnd_127x99_Mag,8);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_WF50_F,1);
		weap_xx(sgun_M4_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco,1);
		item_xx(optic_SOS,1);
		item_xx(optic_Holosight,1);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		item_xx(optic_AMS_snd,1);
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
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
    };
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,12);
        mag_xx(30Rnd_556x45_Stanag_Sand_red,24);
        mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,6);
		mag_xx(20Rnd_762x51_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_A_NATO_AmmoOrd_F: Box_NATO_AmmoOrd_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_AmmoOrd_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_AmmoOrd_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,5);
        mag_xx(APERSMineDispenser_Mag,5);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_A_NATO_Grenades_F: Box_NATO_Grenades_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Grenades_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Grenades_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellYellow,2);
        mag_xx(SmokeShellPurple,2);
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(B_IR_Grenade,8);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_A_NATO_Support_F: Box_NATO_Support_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Support_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Support_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,5);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,5);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_460,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_M_snd_F,5);
		item_xx(muzzle_snds_H_snd_F,5);
		item_xx(muzzle_snds_B_snd_F,5);
		item_xx(muzzle_snds_338_sand,5);
		item_xx(muzzle_mzls_L,5);
		item_xx(muzzle_mzls_M,5);
		item_xx(muzzle_mzls_H,5);
		item_xx(muzzle_mzls_b,5);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator,1);
		item_xx(bipod_01_F_blk,2);
		item_xx(bipod_01_F_mtp,2);
		item_xx(bipod_01_F_snd,2);
		item_xx(NVGoggles,2);
	};
};
class Box_A_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsLaunch_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_F,1);
		weap_xx(launch_B_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,3);
	};
};
class Box_A_NATO_AmmoVeh_F: Box_NATO_AmmoVeh_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_AmmoVeh_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_AmmoVeh_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_AmmoVeh_F_CO.paa"
	};
	class TransportMagazines{};
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
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,24);
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,2);
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
		item_xx(optic_Holosight,1);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_Arco,1);
		item_xx(optic_SOS,1);
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
		item_xx(bipod_01_F_blk,1);
		item_xx(bipod_01_F_mtp,1);
		item_xx(bipod_01_F_snd,1);
		item_xx(NVGoggles,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,2);
	};
};
// NATO (Pacific, British)
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_tropic_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_BandollierB_tna_F,2);
		item_xx(V_Chestrig_rgr,1);
		item_xx(V_ChestrigF_rgr,1);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(V_RebreatherB,2);
		item_xx(H_Booniehat_tna_F,1);
		item_xx(H_Booniehat_tna_hs_F,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_Light_tna_F,1);
		item_xx(H_HelmetB_Enh_Light_tna_F,1);
		item_xx(H_HelmetB_tna_F,1);
		item_xx(H_HelmetB_Enh_tna_F,1);
		item_xx(H_HelmetB_Camo_tna_F,2);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,4);
        item_xx(G_AirPurifyingRespirator_01_F,4);
  	};
	class TransportBackpacks
	{
    	bag_xx(B_AssaultPack_tna_F,2);
		bag_xx(B_Bergen_tna_F,2);
		bag_xx(B_Carryall_tna_F,2);
		bag_xx(B_Kitbag_tna_F,2);
		bag_xx(B_TacticalPack_tna_F,2);
		bag_xx(B_CombinationUnitRespirator_01_F,2);
	};
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_tropic_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_tna_f,4);
		item_xx(U_B_UBACS_tshirt_tna_f,4);
		item_xx(U_B_UBACS_vest_tna_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_T_FullGhillie_tna_F,2);
		item_xx(U_B_Wetsuit,2);
		item_xx(U_B_CBRN_Suit_01_Tropic_F,2);
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_tropic_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_tropic_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(30Rnd_556x45_Stanag_red,4);
        mag_xx(150Rnd_556x45_Drum_Green_Mag_F,1);
		mag_xx(20Rnd_762x51_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_khk_F,4);
		weap_xx(arifle_SA80_C_khk_F,2);
		weap_xx(arifle_SA80_GL_khk_F,2);
		weap_xx(LMG_Mk200_khk_F,2);
		weap_xx(srifle_DMR_02_F,2);
		weap_xx(arifle_SPAR_01_khk_F,3);
		weap_xx(arifle_SPAR_01_GL_khk_F,1);
		weap_xx(arifle_SPAR_02_khk_F,1);
		weap_xx(arifle_SPAR_03_khk_F,1);
		weap_xx(SMG_04_khk_F,1);
		weap_xx(hgun_G17_khaki_F,1);
    };
    class TransportItems{};
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_tropic_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_tropic_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(5Rnd_127x99_Mag,8);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_WF50_F,1);
		weap_xx(sgun_M4_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_SOS_khk_F,1);
		item_xx(optic_Holosight_khk_F,1);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		item_xx(optic_AMS_khk,1);
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_tropic_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_tropic_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,12);
        mag_xx(30Rnd_556x45_Stanag_red,24);
        mag_xx(150Rnd_556x45_Drum_Green_Mag_F,6);
		mag_xx(20Rnd_762x51_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,6);
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_tropic_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,24);
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,2);
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
		item_xx(optic_Holosight_khk_F,1);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_SOS_khk_F,1);
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
		item_xx(bipod_01_F_blk,1);
		item_xx(bipod_01_F_khk,2);
		item_xx(NVGoggles_tna_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_tna_F,2);
	};
};
// NATO (Woodland, British)
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_wdl_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_A_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_BandollierB_rgr,2);
		item_xx(V_Chestrig_rgr,1);
		item_xx(V_ChestrigF_rgr,1);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(V_RebreatherB,2);
		item_xx(H_Booniehat_wdl,1);
		item_xx(H_Booniehat_wdl_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light,1);
		item_xx(H_HelmetB_light_wdl,1);
		item_xx(H_HelmetSpecB_light,1);
		item_xx(H_HelmetSpecB_light_wdl,1);
		item_xx(H_HelmetB,1);
		item_xx(H_HelmetB_plain_wdl,1);
		item_xx(H_HelmetSpecB,1);
		item_xx(H_HelmetSpecB_wdl,1);
		item_xx(H_HelmetB_camo,1);
		item_xx(H_HelmetB_camo_wdl,1);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,4);
        item_xx(G_AirPurifyingRespirator_01_F,4);
  	};
	class TransportBackpacks
	{
    	bag_xx(B_AssaultPack_rgr,1);
    	bag_xx(B_AssaultPack_wdl_F,1);
		bag_xx(B_Bergen_wdl_F,2);
		bag_xx(B_Carryall_wdl_F,2);
		bag_xx(B_Kitbag_rgr,1);
		bag_xx(B_Kitbag_wdl_F,1);
		bag_xx(B_TacticalPack_rgr,2);
		bag_xx(B_CombinationUnitRespirator_01_F,2);
	};
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_wdl_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_A_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_wdl_f,4);
		item_xx(U_B_UBACS_tshirt_wdl_f,4);
		item_xx(U_B_UBACS_vest_wdl_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_W_FullGhillie_wdl_F,2);
		item_xx(U_B_Wetsuit,2);
		item_xx(U_B_CBRN_Suit_01_Wdl_F,2);
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_wdl_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_wdl_F0;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(30Rnd_556x45_Stanag_red,4);
        mag_xx(150Rnd_556x45_Drum_Mag_F,1);
		mag_xx(20Rnd_762x51_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_blk_F,4);
		weap_xx(arifle_SA80_C_blk_F,2);
		weap_xx(arifle_SA80_GL_blk_F,2);
		weap_xx(LMG_Mk200_black_F,2);
		weap_xx(srifle_DMR_02_F,2);
		weap_xx(arifle_SPAR_01_blk_F,3);
		weap_xx(arifle_SPAR_01_GL_blk_F,1);
		weap_xx(arifle_SPAR_02_blk_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
		weap_xx(SMG_04_blk_F,1);
		weap_xx(hgun_G17_black_F,1);
    };
    class TransportItems{};
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_wdl_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_wdl_F0;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(5Rnd_127x99_Mag,8);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_WF50_F,1);
		weap_xx(sgun_M4_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO,1);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(optic_Holosight_blk_F,1);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		item_xx(optic_AMS,1);
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
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_wdl_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_wdl_F0;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(10Rnd_338_Mag,12);
        mag_xx(30Rnd_556x45_Stanag_red,24);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
		mag_xx(20Rnd_762x51_Mag,6);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,6);
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_wdl_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,2);
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
		item_xx(optic_Holosight_blk_F,1);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_SOS,1);
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
		bag_xx(B_Kitbag_rgr,3);
	};
};