class B_Soldier_F;
class I_E_Uniform_01_F;
class I_E_Uniform_01_shortsleeve_F;
class I_E_Uniform_01_tanktop_F;
class I_E_Uniform_01_officer_F;
class I_E_Uniform_01_coveralls_F;
class B_HIDF_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_HIDF_F;
	genericNames = TanoanMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_Tanoan
	};
};
class B_HIDF_CombatFatigues_01_jungle_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_HIDF_Soldier_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_02_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_HIDF_CombatFatigues_01_RolledUp_jungle_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_HIDF_Soldier_2_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_02_CO.paa"
	};
};
class B_HIDF_CombatFatigues_01_TankTop_jungle_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_HIDF_Soldier_3_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_02_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\Heads\Data\hl_white.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat"
		};
	};
};
class B_HIDF_OfficerFatigues_01_jungle_F: I_E_Uniform_01_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_HIDF_Officer_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Officer_F_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_02_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Officer_F.rvmat",
		"\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat"
    };
};
class B_HIDF_Coveralls_01_jungle_F: I_E_Uniform_01_coveralls_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_HIDF_Helipilot_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Helipilot_F_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_HIDF_Soldier_F_02_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_HIDF_Soldier_Base_F: B_HIDF_Man_Base_F
{
	uniformClass = U_B_HIDF_Soldier_F;
};
class B_HIDF_Soldier_A_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
    uniformClass = U_B_HIDF_Soldier_2_F;
	backpack = B_Carryall_oli_HIDFAmmo_F;
	weapons[] =
	{
		arifle_G36_FL_f,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_FL_f,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_AR_F: B_HIDF_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] = {1,0.1,0.3};
    uniformClass = U_B_HIDF_Soldier_2_F;
	weapons[] =
	{
		LMG_03_Flash_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Flash_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Crew_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = U_B_HIDF_Soldier_F;
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
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		H_HelmetCrew_B_HIDF,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_HIDF,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Medic_F: B_HIDF_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = U_B_HIDF_Soldier_2_F;
	backpack = B_Fieldpack_oli_HIDFMedic_F;
	weapons[] =
	{
		arifle_G36_FL_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_FL_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Engineer_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Engineer_F.jpg";
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
	uniformClass = U_B_HIDF_Soldier_F;
	backpack = B_Fieldpack_oli_HIDFEng_F;
	weapons[] =
	{
		arifle_G36C_FL_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_FL_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_GL_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	uniformClass = U_B_HIDF_Soldier_F;
	weapons[] =
	{
		arifle_G36_GL_aco_FL_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_aco_FL_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Helipilot_F: B_HIDF_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_B_HIDF_Helipilot_F;
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
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B_HIDF,
		V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B_HIDF,
		V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_HIDF_Helicrew_F: B_HIDF_Helipilot_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
	uniformClass = U_B_HIDF_Helipilot_F;
	weapons[] =
	{
		arifle_G36C_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_B_HIDF,
		V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_B_HIDF,
		V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_HIDF_soldier_M_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = U_B_HIDF_Soldier_F;
	weapons[] =
	{
		srifle_DMR_06_hunter_khs_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_hunter_khs_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_weathered_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_weathered_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_Booniehat_jungle_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_jungle_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Officer_F: B_HIDF_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = U_B_HIDF_Officer_F;
	weapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(7Rnd_45ACP_Mag),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(7Rnd_45ACP_Mag),
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_MilCap_jungle_F,
		V_BandollierB_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_jungle_F,
		V_BandollierB_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	uniformClass = U_B_HIDF_Soldier_F;
	weapons[] =
	{
		arifle_G36_aco_FL_f,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_aco_FL_f,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_LAT_F: B_HIDF_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
	uniformClass = U_B_HIDF_Soldier_F;
	backpack = B_Fieldpack_oli_HIDFLAT_F;
	weapons[] =
	{
		arifle_G36_aco_FL_f,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_aco_FL_f,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		MRAWS_HEAT55_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA2_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_SL_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniformClass = U_B_HIDF_Soldier_2_F;
	weapons[] =
	{
		arifle_G36_GL_mrco_FL_f,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_mrco_FL_f,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(7Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(7Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_TL_F: B_HIDF_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	uniformClass = U_B_HIDF_Soldier_F;
	weapons[] =
	{
		arifle_G36_GL_mrco_FL_f,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_mrco_FL_f,
		hgun_C1911_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(7Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(7Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellYellow,
        SmokeShellGreen,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIAGL_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_RadioOperator_F: B_HIDF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_HIDF_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_HIDF_Soldier_2_F;
	backpack = B_RadioBag_01_jungle_F;
	weapons[] =
    {
        arifle_G36_aco_FL_f,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_G36_aco_FL_f,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
};
class B_HIDF_Soldier_universal_F: B_HIDF_Soldier_F
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
class B_HIDF_Soldier_unarmed_F: B_HIDF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PASGT_basic_olive_F,
		V_PlateCarrierIA1_oli,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};