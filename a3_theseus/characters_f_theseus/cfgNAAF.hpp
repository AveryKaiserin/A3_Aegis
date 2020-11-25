/* NAAF */
class Theseus_B_N_Man_Base_F: I_Soldier_F
{
    scope = private;
	faction = Theseus_BLU_N_F;
	genericNames = GreekMen;
	side = TWest;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Theseus_B_N_Soldier_Base_F: Theseus_B_N_Man_Base_F
{
	uniformClass = Theseus_U_B_NAAF_Uniform_01_dgtl_F;
};
class Theseus_B_N_Soldier_A_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
    uniformClass = U_I_CombatUniform_tshirt;
	backpack = B_Carryall_oli_BNAmmo_F;	
	weapons[] =
	{
		arifle_TRG20_ACO_Flash_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_ACO_Flash_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_AR_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
    uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	weapons[] =
	{
		LMG_Mk200_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Crew_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Helipilot_F.jpg";
    scope = protected;
    scopeCurator = private;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = U_I_CombatUniform_tshirt;
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
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_oli,
		H_HelmetCrew_I,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_oli,
		H_HelmetCrew_I,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Medic_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	backpack = B_TacticalPack_oli_BNMedic_F;
	weapons[] =
	{
		arifle_Mk20C_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Mk20C_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Engineer_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Engineer_F.jpg";
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
	threat[] =
    {
        1,      // Soft
        0.5,    // Armor
        0.1     // Air
    };
	camouflage = 1.6;
	backpack = B_Carryall_oli_BNEng_F;
	weapons[] =
	{
		arifle_Mk20_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Mk20_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_EOD_olive_F,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_olive_F,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_GL_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		arifle_TRG21_GL_MRCO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_MRCO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Helipilot_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
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
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Theseus_B_N_Helicrew_F: Theseus_B_N_Helipilot_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
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
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Theseus_B_N_soldier_M_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		srifle_DMR_06_camo_khs_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_camo_khs_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20Rnd_Mk14_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_Mk14_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_Booniehat_oli,
		G_Shemag_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_Booniehat_oli,
		G_Shemag_oli,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Officer_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = Theseus_U_B_NAAF_Officer_dgtl_F;
	weapons[] =
	{
		hgun_PDW2000_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_TRG20_ACO_Flash_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_ACO_Flash_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_LAT_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] =
    {
        0.8,    // Soft
        0.8,    // Armor
        0.3     // Air
    };
	secondaryAmmoCoef = 0.5;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	backpack = B_TacticalPack_oli_BNLAT_F;
	weapons[] =
	{
		arifle_Mk20_ACO_F,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Mk20_ACO_F,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_SL_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	weapons[] =
	{
		arifle_TRG21_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30rnd_556x45_Stanag),
		mag_2(30rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_556x45_Stanag),
		mag_2(30rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_TL_F: Theseus_B_N_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	
	weapons[] =
	{
		arifle_TRG21_GL_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_RadioOperator_F: Theseus_B_N_Soldier_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_B_N_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	backpack = B_RadioBag_01_digi_F;
	weapons[] =
    {
        arifle_Mk20_ACO_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20_ACO_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
    };
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
};
class Theseus_B_N_Soldier_universal_F: Theseus_B_N_Soldier_F
{
	author = $STR_A3_A_Heliotrope;
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
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Theseus_B_N_Soldier_unarmed_F: Theseus_B_N_Soldier_F
{
	author = $STR_A3_A_Heliotrope;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_I_Helmet_canvas_Green,
		G_Shemag_oli,
		Goggles_grn_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};