// Arma 3
class I_Soldier_base_F: SoldierGB
{
	class EventHandlers;
};
class I_soldier_F: I_Soldier_base_F{};
class I_pilot_F;
// Arma 3 Atlas
class I_CDF_CBRN_Man_Oversuit_01_Autumn_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_I_CDF_CBRN_Suit_01_Autumn_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Autumn_CO.paa"};
};
class I_CDF_Man_Base_F: I_soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = IND_CDF_F;
	genericNames = CzechMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		G_RUS_default
	};
};
class I_CDF_Uniform_01_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_CDF_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_CDF_Uniform_01_tanktop_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_CDF_Uniform_01_tanktop_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_CDF_Uniform_01_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_CDF_Uniform_01_officer_F: I_E_Uniform_01_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_CDF_Uniform_01_officer_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Officer_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Soldier_01_pants_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Officer.rvmat",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_pants.rvmat"
	};
};
class I_CDF_Uniform_01_coveralls_F: I_pilot_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_I_CDF_Uniform_01_coveralls_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_CDF_Coveralls_01_CO.paa"};
};
class I_CDF_Soldier_base_F: I_CDF_Man_Base_F
{
	uniformClass = U_I_CDF_Uniform_01_F;
};
class I_CDF_Soldier_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class I_CDF_Soldier_unarmed_F: I_CDF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class I_CDF_Soldier_A_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_green_Ammo_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class I_CDF_Soldier_AAR_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_AAR_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
};
class I_CDF_Soldier_AR_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_RPK_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class I_CDF_Soldier_lite_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = U_I_CDF_Uniform_01_tanktop_F;
	linkedItems[] =
	{
		H_MilCap_autumn,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_autumn,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_TRG20_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
};
class I_CDF_Soldier_GL_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIAGL_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIAGL_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class I_CDF_soldier_M_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
    uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		srifle_DMR_05_DMS_LP_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_05_DMS_LP_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class I_CDF_Officer_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = U_I_CDF_Uniform_01_officer_F;
	weapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		H_MilCap_autumn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_autumn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		G_RUS_casual
	};
};
class I_CDF_Soldier_SL_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIAGL_grn,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIAGL_grn,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_CDF_IR_Grenade),
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
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_CDF_IR_Grenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class I_CDF_Soldier_TL_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIAGL_grn,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIAGL_grn,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
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
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
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
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class I_CDF_Survivor_F: I_CDF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Survivor_F.jpg";
    displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	items[] = {};
	respawnItems[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
class I_CDF_RadioOperator_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_autumn_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = RadioOperator;
};
class I_CDF_Soldier_AA_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_AA_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_O_Titan_camo_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_O_Titan_camo_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class I_CDF_Soldier_AT_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_AT_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_O_Titan_short_camo_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		launch_O_Titan_short_camo_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class I_CDF_Soldier_LAT_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_CDFLAT_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_RPG32_green_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_RPG32_green_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class I_CDF_Soldier_LAT2_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_LAT2_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_soldier_LAT2_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_autumn_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_CDFLAT2_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_RPG7_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		launch_RPG7_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        RPG7_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class I_CDF_Soldier_AAA_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_green_AAA_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Soldier_AAT_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_green_AAT_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class I_CDF_Support_GMG_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Support_GMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_GMG_01_Weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Support_MG_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Support_MG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_HMG_01_Weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Support_Mort_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Support_Mort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_Mortar_01_Weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Support_AMG_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Support_AMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_HMG_01_support_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Support_AMort_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_Mortar_01_support_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(I_CDF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class I_CDF_Engineer_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_green_eng_F;
	weapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class I_CDF_Soldier_Exp_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
    linkedItems[] =
    {
        H_HelmetSpecter_headset_F,
        V_PlateCarrierIAGL_grn,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecter_headset_F,
        V_PlateCarrierIAGL_grn,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	backpack = B_Carryall_green_Exp_F;
    weapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
};
class I_CDF_soldier_Mine_F: I_CDF_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_soldier_Mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_green_Mine;
};
class I_CDF_Soldier_Repair_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_Repair_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = U_I_CDF_Uniform_01_F;
    linkedItems[] =
    {
        H_HelmetSpecter_F,
        V_PlateCarrierIA1_grn,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecter_F,
        V_PlateCarrierIA1_grn,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	backpack = B_Fieldpack_green_Repair_F;
    weapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	engineer = true;
	detectSkill = 24;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class I_CDF_Soldier_CBRN_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_CBRN_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_I_CDF_CBRN_Suit_01_Autumn_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA1_grn,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
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
class I_CDF_Medic_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIAGL_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_headset_F,
		V_PlateCarrierIAGL_grn,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Fieldpack_green_Medic_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
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
class I_CDF_Crew_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_Tank_cdf_F,
		V_TacVest_oli,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_Tank_cdf_F,
		V_TacVest_oli,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class I_CDF_Helipilot_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_I_CDF_Uniform_01_coveralls_F;
    linkedItems[] =
    {
        H_PilotHelmetHeli_I_CDF,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_I_CDF,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		SMG_02_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_F,
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
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		G_RUS_pilot
	};
};
class I_CDF_Helicrew_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_I_CDF_Uniform_01_coveralls_F;
    linkedItems[] =
    {
        H_CrewHelmetHeli_I_CDF,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_I_CDF,
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
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		G_RUS_pilot
	};
};
class I_CDF_Soldier_UAV_F: I_CDF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = U_I_CDF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
        I_CDF_UAVTerminal,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_F,
		V_PlateCarrierIA2_grn,
		DefaultManLinkedItems,
        I_CDF_UAVTerminal,
		NVGoggles_OPFOR
	};
	backpack = I_CDF_UAV_01_backpack_F;
	weapons[] =
    {
        arifle_TRG21_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_ACO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class I_CDF_soldier_UAV_06_F: I_CDF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = I_CDF_UAV_06_backpack_F;
};
class I_CDF_soldier_UAV_06_medical_F: I_CDF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = I_CDF_UAV_06_medical_backpack_F;
};
class I_CDF_soldier_UGV_02_Demining_F: I_CDF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = I_CDF_UGV_02_Demining_backpack_F;
};
class I_CDF_Soldier_sniper_base: I_CDF_Soldier_base_F
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
	scope = private;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	canHideBodies = true;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
};
class I_CDF_ghillie_base_F: I_CDF_Soldier_sniper_base
{
    author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_cfgVehicles_O_ghillie_base_F0;
	uniformClass = U_I_CDF_FullGhillie_wdl_F;
	model = "\A3\Characters_F_Mark\INDEP\I_FullGhillie_F.p3d";
	role = Marksman;
	cost = 350000;
	threat[] = {1,0.3,0.3};
	camouflage = 0.4;
	armor = 2;
	armorStructural = 3;
	explosionShielding = 0.3;
	hiddenSelections[] =
	{
		camo,
		camo3,
		camo4
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
	weapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(10Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(10Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	linkedItems[] =
	{
		V_TacVest_oli,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class I_CDF_ghillie_wdl_F: I_CDF_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	hiddenSelectionsTextures[] =
	{
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\ghillie_coverall_CDF_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_SF
	};
};
class I_CDF_ghillie_spotter_wdl_F: I_CDF_ghillie_wdl_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_SF_s};
            speechPlural[] = {veh_infantry_SF_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_ghillie_spotter_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
    cost = 250000;
	weapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_CDF_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(10Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_CDF_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class I_CDF_Fighter_Pilot_F: I_CDF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_CDF_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_I_CDF_Uniform_01_coveralls_F;
    linkedItems[] =
    {
        H_PilotHelmetFighter_I_CDF,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_I_CDF,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		G_RUS_pilot
	};
};
class I_CDF_Soldier_universal_F: I_CDF_Soldier_F
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