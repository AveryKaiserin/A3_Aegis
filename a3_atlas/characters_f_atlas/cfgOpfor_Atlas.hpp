// Arma 3 Atlas
class O_C_Fatigues_01_semiarid_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_CombatUniform_semiarid;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"
	};
};
class O_C_soldier_base_F: O_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = private;
	model = "\A3\Characters_F_Gamma\Guerrilla\IG_Leader.p3d";
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
	uniformClass = U_O_officer_noInsignia_semiarid_F;
    identityTypes[] =
    {
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
    };
    hiddenSelections[] =
    {
        camo1,
        camo2,
        insignia
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_semiarid_CO.paa",
        "\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat",
        "\A3\Characters_F\Civil\Data\c_cloth1.rvmat"
    };
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
        V_HarnessO_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_AK12_545_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_FL_F,
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
	backpack = B_Carryall_semiarid_Ammo_F;
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
        V_HarnessO_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
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
        V_TacVest_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		arifle_AK12_545_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_FL_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
	backpack = B_FieldPack_semiarid_Medic_F;
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
        V_BandollierB_khk,
        H_Tank_black_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Tank_black_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_HarnessO_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        H_Beret_ocamo,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12U_545_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	backpack = B_FieldPack_semiarid_Eng_F;
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
        V_HarnessOGL_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_GL_545_aco_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_aco_FL_F,
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
	uniformClass = U_O_officer_noInsignia_semiarid_F;
    linkedItems[] =
    {
        V_TacVest_tan,
        H_PilotHelmetHeli_O,
        //G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PilotHelmetHeli_O,
        //G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_TacVest_tan,
        H_CrewHelmetHeli_O,
        //G_Shemag_white,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_CrewHelmetHeli_O,
        //G_Shemag_white,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
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
        mag_10(10Rnd_762x54_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
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
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_AK12U_545_FL_F,
        launch_O_Titan_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_AK12U_545_FL_F,
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
	backpack = B_FieldPack_semiarid_AA_F;
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
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
	weapons[] =
    {
        arifle_AK12U_545_FL_F,
        launch_O_Titan_short_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_AK12U_545_FL_F,
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
	backpack = B_FieldPack_semiarid_AT_F;
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
        V_BandollierB_khk,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_3(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_3(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_HarnessO_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_545_aco_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_FL_F,
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
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_545_aco_FL_F,
        launch_RPG32_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_FL_F,
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
	backpack = B_FieldPack_semiarid_LAT_F;
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
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_TacVest_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_545_arco_FL_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_arco_FL_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_HarnessOGL_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_tan,
        H_PASGT_basic_olive_F,
        //G_Shemag_white,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_AK12_GL_545_arco_FL_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_FL_F,
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
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
		V_HarnessO_tan,
		H_Beret_ocamo,
        //G_Shemag_white,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_tan,
		H_Beret_ocamo,
        //G_Shemag_white,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_semiarid_F;
	weapons[] =
    {
        arifle_AK12_545_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_FL_F,
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