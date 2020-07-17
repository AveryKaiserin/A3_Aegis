// Arma 3
class O_Soldier_F;
class O_officer_F;
class O_helipilot_F;
// Arma 3 Atlas
class O_C_Fatigues_01_tkcamo_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_CombatUniform_tkcamo;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tkcamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tkcamo_CO.paa"
	};
};
class O_C_soldier_base_F: O_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = private;
	model = "\A3\Characters_F\OPFOR\O_Officer_noinsignia_F.p3d";
	modelSides[] =
	{
		TEast,
		TCivilian
	};
	side = TEast;
    faction = OPF_C_F;
	icon = iconMan;
	role = Rifleman;
	camouflage = 1.6;
	uniformClass = U_O_C_officer_noInsignia_tkcamo_F;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_tkcamo_CO.paa"};
    items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	linkedItems[] = {DefaultManLinkedItems};
	respawnLinkedItems[] = {DefaultManLinkedItems};
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	class Wounds
    {
        mat[] =
        {
            "A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat"
        };
        tex[] = {};
    };
};
class O_C_soldier_A_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_s};
			speechPlural[] = {veh_infantry_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_s;
	textPlural = $STR_A3_nameSound_veh_infantry_p;
	nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_A_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_A_F0;
    items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	linkedItems[] =
    {
        H_MilCap_tkcamo,
        V_HarnessO_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_MilCap_tkcamo,
        V_HarnessO_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_AK12_545_fl_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_fl_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	backpack = B_Carryall_tkcamo_Ammo;
};
class O_C_soldier_AR_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_MG_s};
			speechPlural[] = {veh_infantry_MG_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
	textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
	nameSound = veh_infantry_MG_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_AR_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_AR_F0;
	icon = iconManMG;
	role = MachineGunner;
	cost = 220000;
	linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessO_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessO_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_RPK12_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK12_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class O_C_medic_F: O_C_soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_medic_F.jpg";
	scope = public;
	displayName = $STR_B_medic_F0;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	attendant = true;
	linkedItems[] =
    {
        H_MilCap_tkcamo,
        V_TacVest_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_MilCap_tkcamo,
        V_TacVest_tan,
        G_Shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_AK12_545_fl_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_fl_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
	backpack = B_FieldPack_tkcamo_Medic;
};
class O_C_crew_F: O_C_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_crew_F.jpg";
    scope = public;
    displayName = $STR_B_crew_F0;
    role = Crewman;
    cost = 90000;
    engineer = true;
    linkedItems[] =
    {
        H_Tank_black_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Tank_black_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        SMG_05_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_05_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
};
class O_C_engineer_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_engineer_F.jpg";
    scope = public;
	displayName = $STR_B_engineer_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
    linkedItems[] =
    {
        H_Cap_tan,
        V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_tan,
        V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12U_545_fl_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_fl_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
	backpack = B_FieldPack_tkcamo_Eng;
};
class O_C_soldier_GL_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_GL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_GL_F0;
	role = Grenadier;
	cost = 200000;
    linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_GL_545_aco_fl_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_aco_fl_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class O_C_helipilot_F: O_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_pilot_s};
            speechPlural[] = {veh_infantry_pilot_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
    textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
    nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_helipilot_F.jpg";
    scope = public;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    faction = OPF_C_F;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_O_C_officer_noInsignia_tkcamo_F;
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    weapons[] =
    {
        SMG_05_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_05_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_C_helicrew_F: O_C_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_pilot_s};
            speechPlural[] = {veh_infantry_pilot_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
    textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
    nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_helicrew_F.jpg";
    scope = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
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
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_C_soldier_M_F: O_C_soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_M_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_M_F0;
	role = Marksman;
	cost = 250000;
	threat[] = {0.8,0.3,0.3};
    linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        srifle_DMR_01_ARCO_BI_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_ARCO_BI_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(20Rnd_762x54_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_762x54_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_C_soldier_AA_F: O_C_soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_AA_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_AA_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        H_Cap_tan,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_tan,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_AK12U_545_fl_F,
        launch_O_Titan_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_AK12U_545_fl_F,
        launch_O_Titan_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_tkcamo_AA;
};
class O_C_soldier_AT_F: O_C_soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_AT_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_AT_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        H_MilCap_tkcamo,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_MilCap_tkcamo,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_AK12U_545_fl_F,
        launch_O_Titan_short_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_AK12U_545_fl_F,
        launch_O_Titan_short_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_tkcamo_AT;
};
class O_C_officer_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_officer_F.jpg";
	scope = public;
	displayName = $STR_B_officer_F0;
	icon = iconManOfficer;
	cost = 250000;
    linkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        SMG_05_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        SMG_05_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_3(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_3(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_C_soldier_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
    linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_545_aco_fl_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_fl_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_C_soldier_LAT_F: O_C_soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_LAT_F0;
	icon = iconManAT;
	role = MissileSpecialist;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
    linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_TacVest_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_545_aco_fl_F,
        launch_RPG32_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_fl_F,
        launch_RPG32_F,
        DefaultManWeapons
    };
	    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_tkcamo_LAT;
};
class O_C_soldier_SL_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_SL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_SL_F0;
	icon = iconManLeader;
	cost = 250000;
   linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_GL_545_arco_fl_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_fl_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
};
class O_C_soldier_TL_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_TL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_TL_F0;
	icon = iconManLeader;
	role = Grenadier;
	cost = 250000;
    linkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PASGT_basic_olive_F,
        V_HarnessOGL_tan,
        G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_GL_545_arco_fl_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_fl_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
};
class O_C_Fighter_Pilot_F: O_C_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_O_PilotCoveralls;
    weapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
};
class O_C_soldier_universal_F: O_C_soldier_F
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
class O_C_RadioOperator_F: O_C_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		H_MilCap_tkcamo,
		V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_tkcamo,
		V_HarnessO_tan,
        G_Shemag_white,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_tkcamo_F;
	weapons[] =
    {
        arifle_AK12_545_fl_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_fl_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_LightFatigues_01_tkcamo_F: O_C_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_tkcamo_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_tkcamo_CO.paa"};
};