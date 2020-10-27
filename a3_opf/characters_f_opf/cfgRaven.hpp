// Arma 3
class I_Soldier_base_F: SoldierGB
{
	class EventHandlers;
};
class I_soldier_F: I_Soldier_base_F{};
// Arma 3 Opposing Forces
class Opf_I_R_soldier_base_F: I_soldier_F
{
	scope = private;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_ION_default
	};
	faction = Opf_IND_R_F;
	genericNames = RussianMen;
	uniformClass = U_O_E_Uniform_01_arid_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class Opf_I_R_soldier_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	role = Rifleman;
	weapons[] = 
	{
		arifle_AK12_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_GL_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_GL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_GL_F0;
	weapons[] = 
	{
		arifle_AK12_GL_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_GL_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		mag_6(1Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		mag_6(1Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_MG_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_MG_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_AR_F0;
	weapons[] = 
	{
		arifle_RPK12_lush_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK12_lush_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(75Rnd_762x39_AK12_Lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(75Rnd_762x39_AK12_Lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	uniformClass = Opf_U_O_R_CombatUniform_tshirt_arid_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_TL_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_TL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_O_R_Gorka_01_F;
	weapons[] = 
	{
		arifle_AK12_545_lush_arco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_lush_arco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_4(30Rnd_545x39_lush_Mag_F),
        mag_2(30Rnd_545x39_lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_4(30Rnd_545x39_lush_Mag_F),
        mag_2(30Rnd_545x39_lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
        SmokeShell
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_headset_F,
		V_HarnessOSpec_blk,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_headset_F,
		V_HarnessOSpec_blk,
		ItemGPS,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_M_F: Opf_I_R_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_M_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	weapons[] = 
	{
		srifle_DMR_01_lush_ARCO_BI_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] = 
	{
		srifle_DMR_01_lush_ARCO_BI_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] = 
	{
        mag_10(10Rnd_762x54_mag),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_10(10Rnd_762x54_mag),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	cost = 250000;
	role = Marksman;
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_LAT_F: Opf_I_R_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Opf_U_O_R_CombatUniform_tshirt_arid_F;
	backpack = B_FieldPack_green_IRLAT_F;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
        RPG32_F,
		mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
        RPG32_F,
		mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	secondaryAmmoCoef = 0.5;
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_medic_F: Opf_I_R_soldier_base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_medic_F.jpg";
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	attendant = true;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	camouflage = 1.6;
	icon = iconManMedic;
	role = CombatLifeSaver;
	backpack = B_FieldPack_green_IRMedic_F;
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	picture = pictureHeal;
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_engineer_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_engineer_F.jpg";
	scope = public;
	displayName = $STR_B_engineer_F0;
	camouflage = 1.6;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	backpack = B_Carryall_green_IREng_F;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_FL_f,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	icon = iconManEngineer;
	role = Sapper;
	picture = pictureRepair;
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_Soldier_UAV_F: Opf_I_R_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_Soldier_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	role = SpecialOperative;
	uavHacker = true;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	backpack = Opf_I_R_UAV_01_backpack_F;
	weapons[] =
	{
		SMG_02_ACO_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		I_R_UAVTerminal
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		I_R_UAVTerminal
	};
    headgearList[] = 
    {
        //H_MilCap_rucamo,1,
        H_Cap_khk_Raven,1,
        H_Cap_khk_Raven_hs,1,
        H_Cap_headphones_Raven,1,
        H_HelmetSpecter_black_F,1,
        H_HelmetSpecter_black_headset_F,1,
		H_Headset_light,1
    };
};
class Opf_I_R_soldier_UAV_06_F: Opf_I_R_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = UAV_06_backpack_F;
};
class Opf_I_R_soldier_UAV_06_medical_F: Opf_I_R_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = I_R_UAV_06_medical_backpack_F;
};
class Opf_I_R_Soldier_universal_F: Opf_I_R_soldier_F
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
	scope = protected;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Opf_I_R_Soldier_unarmed_F: Opf_I_R_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Cap_khk_Raven,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};