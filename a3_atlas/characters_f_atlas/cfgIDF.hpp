// Arma 3
class I_Soldier_base_F: SoldierGB
{
	class EventHandlers;
};
class I_soldier_F: I_Soldier_base_F{};
class I_soldier_lite_F;
class I_officer_F;
// Arma 3 Atlas
class I_I_CBRN_Man_Oversuit_01_Olive_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_I_I_CBRN_Suit_01_Olive_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Olive_CO.paa"};
};
class I_I_Man_Base_F: I_soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = IND_I_F;
	genericNames = IDFMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_IDF_default
	};
};
class I_I_CombatFatigues_01_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_I_Soldier_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
};
class I_I_CombatFatigues_01_RolledUp_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_I_Soldier_2_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
};
class I_I_OfficerFatigues_01_F: I_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_I_Officer_F;
	hiddenSelections[] =
    {
		camo1,
		camo2,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01.rvmat",
        "\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat"
    };
};
class I_I_Uniform_01_tank_F: I_Story_Crew_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_Tank_olive_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_olive_CO.paa"};
};
class I_I_Soldier_Base_F: I_I_Man_Base_F
{
	uniformClass = U_I_I_Soldier_F;
};
class I_I_Soldier_A_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_I_I_Soldier_2_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_oli_IIAmmo_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 110000;
};
class I_I_Soldier_AR_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_I_I_Soldier_2_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		LMG_Zafir_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Zafir_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 125000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class I_I_medic_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_I_I_Soldier_2_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_AssaultPack_sgg_IIMedic_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	attendant = true;
	camouflage = 1.6;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
};
class I_I_crew_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_Tank_olive_F;
	linkedItems[] =
	{
		H_HelmetCrew_I_I,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_I_I,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG20_black_ACO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
    engineer = true;
	cost = 90000;
	role = Crewman;
};
class I_I_engineer_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Kitbag_sgg_IIEng_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	camouflage = 1.6;
	canDeactivateMines = true;
	cost = 220000;
	detectSkill = 31;
	engineer = true;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	threat[] = {1,0.5,0.1};
};
class I_I_Soldier_GL_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 200000;
    role = Grenadier;
};
class I_I_helipilot_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_helipilot_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
        H_PilotHelmetHeli_I_I,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_I_I,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class I_I_helicrew_F: I_I_helipilot_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_helicrew_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
        H_CrewHelmetHeli_I_I,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_I_I,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		arifle_TRG20_black_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	cost = 80000;
	role = Crewman;
};
class I_I_soldier_M_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_SOS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_SOS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class I_I_soldier_AA_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_TacticalPack_sgg_IIAA_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_B_Titan_olive_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_B_Titan_olive_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class I_I_soldier_AT_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_TacticalPack_sgg_IIAT_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_I_Titan_short_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_I_Titan_short_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    cost = 190000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class I_I_officer_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_officer_F.jpg";
    scope = public;
    scopeCurator = public;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF
	};
    displayName = $STR_B_officer_F0;
	uniformClass = U_I_I_Officer_F;
	linkedItems[] =
	{
		H_MilCap_grn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_grn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		hgun_PDW2000_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class I_I_Soldier_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 100000;
};
class I_I_Soldier_LAT_F: I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_AssaultPack_sgg_IILAT_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_MRAWS_olive_rail_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_MRAWS_olive_rail_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
	threat[] = {0.8,0.8,0.3};
};
class I_I_Soldier_SL_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = U_I_I_Soldier_2_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_I_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_I_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell
	};
	camouflage = 1.4;
    cost = 500000;
	icon = iconManLeader;
	role = Grenadier;
};
class I_I_Soldier_TL_F: I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_I_I_Soldier_F;
	linkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_black_headset_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell
	};
	camouflage = 1.4;
    cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
};
class I_I_Soldier_CBRN_F: I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_I_I_CBRN_Suit_01_Olive_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	class EventHandlers: EventHandlers
	{
		class BIN_CBRN_INIT
		{
			init = "_this call bin_fnc_CBRNHoseInit;";
		};
	};
};
class I_I_RadioOperator_F: I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_I_I_Soldier_2_F;
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_sage_F;
	weapons[] =
    {
        arifle_TRG21_black_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_I_Fighter_Pilot_F: I_I_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Fighter_Pilot_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
        H_PilotHelmetFighter_I_I,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_I_I,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellOrange,
        SmokeShellPurple
	};
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};
class I_I_Soldier_universal_F: I_I_Soldier_F
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
class I_I_Soldier_unarmed_F: I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetI_I_01_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};