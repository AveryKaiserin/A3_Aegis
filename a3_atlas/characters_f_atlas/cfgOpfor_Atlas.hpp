// Arma 3
class O_officer_F;
// Arma 3 Atlas
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
	uniformClass = U_O_officer_noInsignia_sard_F;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_sard_CO.paa"};
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
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_injury_noInsignia.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_injury_noInsignia.rvmat"
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_soldier_A_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_A_F0;
    items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	linkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_AK12_flash_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_flash_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	backpack = B_FieldPack_cbr_Ammo_F;
};
class O_C_soldier_AR_F: O_C_soldier_base_F
{

};
class O_C_medic_F: O_C_soldier_base_F
{

};
class O_C_crew_F: O_C_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_crew_F.jpg";
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
    scope = public;
    displayName = $STR_B_crew_F0;
    role = Crewman;
    cost = 90000;
    engineer = true;
    weapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_02_F,
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
    linkedItems[] =
    {
        H_Tank_black_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Tank_black_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
};
class O_C_engineer_F: O_C_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
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
	backpack = B_AssaultPack_ocamo_Eng_F;
    weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
};
class O_C_soldier_GL_F: O_C_soldier_base_F
{

};
class O_C_helipilot_F: O_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_helipilot_F.jpg";
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
    scope = public;
    scopeCurator = public;
    genericNames = AfroMen;
	identityTypes[] =
	{
		LanguageFRE_F,
		Head_African,
		G_IRAN_default
	};
    faction = OPF_A_F;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_O_officer_noInsignia_hex_F;
    weapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_02_F,
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
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_C_helicrew_F: O_C_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
    weapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_C_soldier_M_F: O_C_soldier_base_F
{

};
class O_C_soldier_AA_F: O_C_soldier_base_F
{

};
class O_C_soldier_AT_F: O_C_soldier_base_F
{

};
class O_C_officer_F: O_C_soldier_base_F
{

};
class O_C_soldier_F: O_C_soldier_base_F
{

};
class O_C_soldier_LAT_F: O_C_soldier_base_F
{

};
class O_C_soldier_SL_F: O_C_soldier_base_F
{

};
class O_C_soldier_TL_F: O_C_soldier_base_F
{

};
class O_C_Fighter_Pilot_F: O_C_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_Fighter_Pilot_F.jpg";
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_C_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		H_MilCap_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_hex_F;
	weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_LightFatigues_01_sard_F: O_C_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_sard_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_sard_CO.paa"};
};