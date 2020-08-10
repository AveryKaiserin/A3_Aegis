class Box_AAF_Equip_F;
class Box_IDF_Equip_F: Box_AAF_Equip_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_IDF_Equip_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\equipment_box_IDF_CO.paa",
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\equipment_box_IDF_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_oli,2);
		item_xx(V_BandollierB_oli,2);
		item_xx(V_TacVest_oli,2);
		item_xx(V_TacVest_blk,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(H_Beret_brn,2);
		item_xx(H_HelmetI_I_01_F,4);
		item_xx(H_HelmetSpecter_black_F,1);
		item_xx(H_HelmetSpecter_black_headset_F,1);
		item_xx(H_HelmetCrew_I_I,2);
		item_xx(H_PilotHelmetFighter_I_I,2);
		item_xx(H_PilotHelmetHeli_I_I,2);
		item_xx(H_CrewHelmetHeli_I_I,2);
		item_xx(V_TacChestrig_oli_F,2);
        item_xx(G_I_I_Diving,4);
        item_xx(G_RegulatorMask_F,4);
  	};
	class TransportBackpacks
	{
    	bag_xx(B_AssaultPack_sgg,2);
		bag_xx(B_Carryall_oli,2);
		bag_xx(B_Kitbag_sgg,2);
		bag_xx(B_RadioBag_01_sage_F,2);
		bag_xx(B_TacticalPack_sgg,2);
	};
};
class Box_AAF_Uniforms_F;
class Box_IDF_Uniforms_F: Box_AAF_Uniforms_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Uniforms_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_IDF_Uniforms_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\uniforms_box_IDF_CO.paa",
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\equipment_box_IDF_CA.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_I_I_CombatUniform_olive,4);
		item_xx(U_I_I_OfficerUniform,4);
		item_xx(U_I_I_CombatUniform_shortsleeve_olive,4);
		item_xx(U_I_I_GhillieSuit,4);
		item_xx(U_I_I_Wetsuit,4);
		item_xx(U_Tank_olive_F,4);
		item_xx(U_I_I_CBRN_Suit_01_Olive_F,4);
  	};
};
class Box_IND_Wps_F;
class Box_IDF_Wps_F: Box_IND_Wps_F
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
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_IDF_Wps_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag,8);
        mag_xx(9Rnd_45ACP_Mag,1);
        mag_xx(30Rnd_9x21_Mag,1);
        mag_xx(150Rnd_762x51_Box_Yellow,2);
    };
    class TransportWeapons
    {
		weap_xx(arifle_TRG21_black_F,4);
		weap_xx(arifle_TRG20_black_F,2);
		weap_xx(arifle_TRG21_GL_black_F,2);
		weap_xx(LMG_Zafir_black_F,2);
		weap_xx(hgun_PDW2000_F,1);
		weap_xx(hgun_ACPC2_F,1);
    };
    class TransportItems{};
};
class Box_IND_WpsSpecial_F;
class Box_IDF_WpsSpecial_F: Box_IND_WpsSpecial_F
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
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_IDF_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(20Rnd_762x51_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_EBR_F,1);
		weap_xx(sgun_AA40_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_MRCO,1);
		item_xx(optic_SOS,1);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
	};
};
class Box_IND_Ammo_F;
class Box_IDF_Ammo_F: Box_IND_Ammo_F
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
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_IDF_Ammo_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
    };
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,48);
		mag_xx(9Rnd_45ACP_Mag,6);
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(150Rnd_762x51_Box_Yellow,8);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_IND_AmmoOrd_F;
class Box_IDF_AmmoOrd_F: Box_IND_AmmoOrd_F
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
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_AmmoOrd_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_IDF_AmmoOrd_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
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
        mag_xx(FlareTripMine_Wire_Mag,5);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_IND_Grenades_F;
class Box_IDF_Grenades_F: Box_IND_Grenades_F
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
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Grenades_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_IDF_Grenades_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
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
        mag_xx(I_I_IR_Grenade,8);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_IND_Support_F;
class Box_IDF_Support_F: Box_IND_Support_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_Support_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_IDF_Support_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
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
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_M,5);
		item_xx(muzzle_snds_b,5);
		item_xx(muzzle_snds_acp,5);
		item_xx(muzzle_mzls_L,5);
		item_xx(muzzle_mzls_M,5);
		item_xx(muzzle_mzls_b,5);
		item_xx(muzzle_mzls_acp,5);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_03,1);
		item_xx(bipod_03_F_oli,2);
		item_xx(NVGoggles_INDEP,2);
	};
};
class Box_IND_WpsLaunch_F;
class Box_IDF_WpsLaunch_F: Box_IND_WpsLaunch_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_IDF_WpsLaunch_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_IDF_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_olive_F,1);
		weap_xx(launch_I_Titan_short_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_sgg,3);
	};
};
class Box_IND_AmmoVeh_F;
class Box_IDF_AmmoVeh_F: Box_IND_AmmoVeh_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_IDF_AmmoVeh_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_IDF_AmmoVeh_F0;
	editorCategory = EdCat_Supplies;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_IDF_CO.paa",
		"\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoVeh_IDF_CO.paa"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
};
class I_I_supplyCrate_F: I_supplyCrate_F
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
	//editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_I_supplyCrate_F0;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(9Rnd_45ACP_Mag,6);
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(150Rnd_762x51_Box_Yellow,4);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,6);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareYellow_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
		weap_xx(arifle_TRG20_F,1);
		weap_xx(arifle_TRG21_GL_F,1);
		weap_xx(LMG_Zafir_olive_F,1);
		weap_xx(srifle_EBR_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_03,1);
		item_xx(optic_MRCO,1);
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
		item_xx(bipod_03_F_oli,1);
		item_xx(NVGoggles_INDEP,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_sgg,2);
	};
};