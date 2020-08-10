// Arma 3
class B_Soldier_F;
class B_soldier_AR_F;
class B_Soldier_SL_F;
// Arma 3 Marine
class B_USMC_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_USMC_F;
};
class B_MCUCombatFatigues_01_desert_F: B_Soldier_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_desert_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa"};
};
class B_MCUCombatFatigues_01_wdl_F: B_Soldier_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa"};
};
class B_MCUCombatFatigues_01_Tshirt_desert_F: B_soldier_AR_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_tshirt_desert_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
    };
};
class B_MCUCombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_tshirt_wdl_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
    };
};
class B_MCUReconFatigues_01_desert_F: B_Soldier_SL_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_vest_desert_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_desert_CO.paa"};
};
class B_MCUReconFatigues_01_wdl_F: B_Soldier_SL_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_MCU_vest_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing1_mwdl_CO.paa"};
};
class B_USMC_Soldier_Base_F: B_USMC_Man_Base_F
{
	editorSubcategory = EdSubcat_Personnel_Camo_Desert;
};
class B_USMC_Soldier_A_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = U_B_MCU_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_cbr_USMCAmmo_F;
	weapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 110000;
};
class B_USMC_Soldier_AR_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = U_B_MCU_tshirt_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
	};
	weapons[] =
	{
        arifle_MX_SW_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_SW_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class B_USMC_medic_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	uniformClass = U_B_MCU_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
	};
	backpack = B_AssaultPack_cbr_USMCMedic_F;
	weapons[] =
	{
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
};
class B_USMC_engineer_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_B_MCU_vest_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_cbr_USMCEng_F;
	weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
	engineer = true;
	canDeactivateMines = true;
	cost = 220000;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
};
class B_USMC_Soldier_GL_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_B_MCU_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
	};
	weapons[] =
	{
        arifle_MX_GL_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 200000;
	role = Grenadier;
};
class B_USMC_soldier_M_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_M_F0;
	uniformClass = U_B_MCU_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    weapons[] =
    {
        arifle_MXM_RCO_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MXM_RCO_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	cost = 250000;
	role = Marksman;
};
class B_USMC_soldier_AA_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_B_MCU_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_cbr_USMCAA_F;
	weapons[] =
	{
		arifle_MXC_Holo_pointer_F,
		launch_B_Titan_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_pointer_F,
		launch_B_Titan_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class B_USMC_soldier_AT_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_B_MCU_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_cbr_USMCAT_F;
	weapons[] =
	{
		arifle_MXC_Holo_pointer_F,
		launch_B_Titan_short_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_pointer_F,
		launch_B_Titan_short_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 190000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class B_USMC_officer_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_officer_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_casual
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
	uniformClass = U_B_MCU_desert_F;
	linkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_desert,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_desert,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_MXC_F,
		hgun_Pistol_heavy_01_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MXC_F,
		hgun_Pistol_heavy_01_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class B_USMC_Soldier_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = U_B_MCU_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_MX_Holo_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Holo_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 100000;
	role = Rifleman;
};
class B_USMC_Soldier_LAT_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_LAT_F0;
	uniformClass = U_B_MCU_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
	backpack = B_AssaultPack_cbr_USMCLAT_F;
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {0.8,0.8,0.3};
};
class B_USMC_Soldier_SL_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = U_B_MCU_vest_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier2_khk,
		H_HelmetSpecB_light_sand,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_khk,
		H_HelmetSpecB_light_sand,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
    {
		arifle_MX_Hamr_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
		arifle_MX_Hamr_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class B_USMC_Soldier_TL_F: B_USMC_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_B_MCU_vest_desert_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    weapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_BLUFOR
    };
	cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
};
class B_USMC_RadioOperator_F: B_USMC_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_MCU_vest_desert_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_coyote_F;
	weapons[] =
    {
		arifle_MX_Holo_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Holo_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};



class B_USMC_Soldier_A_wdl_F: B_USMC_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_A_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_USMC_Soldier_AR_wdl_F: B_USMC_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_AR_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_tshirt_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
	};
	weapons[] =
	{
        arifle_MX_SW_Black_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_SW_Black_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class B_USMC_medic_wdl_F: B_USMC_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_medic_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
	};
	weapons[] =
	{
        arifle_MX_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
};
class B_USMC_engineer_wdl_F: B_USMC_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_engineer_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_vest_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_MXC_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
};
class B_USMC_Soldier_GL_wdl_F: B_USMC_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_GL_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
	};
	weapons[] =
	{
        arifle_MX_GL_Black_ACO_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_ACO_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class B_USMC_soldier_M_wdl_F: B_USMC_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_M_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        arifle_MXM_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MXM_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_USMC_soldier_AA_wdl_F: B_USMC_soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_AA_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_USMC_soldier_AT_wdl_F: B_USMC_soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_soldier_AT_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_USMC_officer_wdl_F: B_USMC_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_officer_wdl_F.jpg";
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
	linkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_mwdl,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_mwdl,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
};
class B_USMC_Soldier_wdl_F: B_USMC_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_MX_Black_Holo_pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_USMC_Soldier_LAT_wdl_F: B_USMC_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_LAT_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier2_khk,
		H_HelmetB_light,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_USMC_Soldier_SL_wdl_F: B_USMC_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_SL_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_vest_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier2_khk,
		H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_khk,
		H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_MX_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
		arifle_MX_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
};
class B_USMC_Soldier_TL_wdl_F: B_USMC_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_Soldier_TL_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	editorSubcategory = EdSubcat_Personnel_Camo_Woodland;
	uniformClass = U_B_MCU_vest_wdl_F;
    linkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_PlateCarrier1_khk,
		H_HelmetSpecB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    weapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_BLUFOR
    };
};
class B_USMC_RadioOperator_wdl_F: B_USMC_Soldier_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\B_USMC_RadioOperator_wdl_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_MCU_vest_wdl_F;
	linkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_khk,
		H_HelmetB_light_sand,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_coyote_F;
	weapons[] =
    {
		arifle_MX_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};