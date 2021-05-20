class Atlas_B_M_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_M_F;
	genericNames = TakistaniMen;
	identityTypes[] =
	{
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
	};
};
class Atlas_B_M_Soldier_base_F: Atlas_B_M_Man_Base_F
{
	uniformClass = Atlas_U_B_M_CombatUniform_des;
};
class Atlas_B_M_Soldier_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Atlas_B_M_TL_F: Atlas_B_M_Soldier_Base_F
{
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_M_CombatUniform_shortsleeve_des;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_headset_F,
		DefaultManLinkedItems,
		NVgoggles
	};
    weapons[] =
    {
        arifle_mk20_gl_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_mk20_gl_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    cost = 450000;
};
class Atlas_B_M_GL_F: Atlas_B_M_Soldier_Base_F
{
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
    weapons[] =
    {
        arifle_mk20_gl_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_mk20_gl_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    cost = 450000;
};
class Atlas_B_M_AR_F: Atlas_B_M_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = Atlas_U_B_M_CombatUniform_tee_des;
	linkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_snd,
		H_HelmetSpecter_brown_F,
		DefaultManLinkedItems,
		NVgoggles
	};
	weapons[] =
    {
        lmg_03_snd_holo,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        lmg_03_snd_holo,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        SmokeShell
    };
	cost = 125000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_B_M_M_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_M_F0;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_scar_SV_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_scar_SV_F,
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
/*class Atlas_B_M_exp_F: Atlas_B_M_Soldier_Base_F
{
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_exp_F0;
    backpack = B_Carryall_CBRExp_F;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_holo_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
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
class Atlas_B_M_medic_F: Atlas_B_M_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_VZ_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_medic_F0;
    backpack = B_AssaultPack_marar_medic;
    linkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_snd,
        H_HelmetSpecter_brown_F,
        DefaultManLinkedItems,
        NVgoggles
    };
    weapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_mk20_plain_arco_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
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