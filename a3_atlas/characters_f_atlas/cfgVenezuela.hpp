/* Venezuela */
class O_A_soldier_base_F;
class Atlas_O_VZ_Man_Base_F: O_A_soldier_base_F
{
    scope = private;
	faction = Atlas_OPF_V_F;
	genericNames = GreekMen;
	//genericNames = VZmen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Atlas_O_VZ_Soldier_Base_F: Atlas_O_VZ_Man_Base_F
{
	uniformClass = Atlas_U_O_VZ_Officer_oli_CO_F;
};
class Atlas_O_VZ_Soldier_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_O_VZ_TL_F: Atlas_O_VZ_Soldier_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	linkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 450000;
};
class Atlas_O_VZ_AR_F: Atlas_O_VZ_Soldier_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_03_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
	cost = 125000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_exp_F: Atlas_O_VZ_Soldier_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12U_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 115000;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Atlas_O_VZ_M_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_M_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        srifle_dmr_06_blk_kh_bp_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(20rnd_762x51_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_O_VZ_medic_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	cost = 300000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_VZ_Soldier_LAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lat_F0;
	backpack = B_FieldPack_owcamo_OVZLAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_RPG7_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_VZ_A_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_owcamo_OVZAmmo_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class Atlas_O_VZ_Soldier_AAR_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AAR_F0;
	backpack = B_FieldPack_owcamo_OVZAAR_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class Atlas_O_VZ_support_MG_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	backpack = O_R_HMG_01_Weapon_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AMG_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	backpack = O_R_HMG_01_support_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_Mort_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	backpack = O_R_Mortar_01_Weapon_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AMort_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	backpack = O_R_Mortar_01_support_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AHAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_AHAT_F0;
	Backpack = B_FieldPack_owcamo_OWHAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AAA_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	Backpack = B_Carryall_owcamo_OWAAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_support_AAT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	Backpack = B_Carryall_owcamo_OWAAT_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class Atlas_O_VZ_Crew_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
};
class Atlas_O_VZ_engineer_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	Backpack = B_Carryall_owcamo_OWEng_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	canDeactivateMines = true;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	engineer = true;
	camouflage = 1.6;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Atlas_O_VZ_soldier_mine_F: Atlas_O_VZ_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_owcamo_Mine;
};
class Atlas_O_VZ_Helipilot_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		smg_05_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_O_VZ_Helicrew_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
    };
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_O_VZ_Soldier_AA_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_owcamo_OWAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_O_Titan_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_VZ_Soldier_AT_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AT_F0;
	backpack = B_FieldPack_owcamo_OWAA_F;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        launch_O_Titan_short_camo_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_VZ_Officer_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_officer_F0;
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_CSAT_01_F,
		DefaultManLeaderLinkedItems
	};
	weapons[] =
    {
      	arifle_AK12_545_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class Atlas_O_VZ_Soldier_lite_F: Atlas_O_VZ_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_AK12U_545_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
	cost = 90000;
	camouflage = 1.2;
    role = Rifleman;
};
class Atlas_O_VZ_SL_F: Atlas_O_VZ_Soldier_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_SL_F0;
	linkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
		SMOKEGRENADES_OPFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class Atlas_O_VZ_RadioOperator_F: Atlas_O_VZ_Soldier_F
{
	author = $STR_A3_A_Bran STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_whex_F;
	linkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_whex,
		H_HelmetSpecter_cover_whex_CO,
		DefaultManLinkedItems,
		Goggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};

/*class Atlas_O_VZ_Recon_Base_F: Atlas_O_VZ_Soldier_Base_F
{
	uniformClass = Atlas_U_O_VZ_Officer_oli_CO_F;
    scope = private;
	faction = Atlas_OPF_V_F;
	genericNames = GreekMen;
	//genericNames = VZmen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Atlas_O_VZ_recon_TL_F: Atlas_O_VZ_Recon_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_TL_F.jpg";
	author = $STR_A3_A_BranFlakes;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Recon_TL_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_black_slcr_arco_F,
        hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};*/