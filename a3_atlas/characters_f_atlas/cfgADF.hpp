// Arma 3
class B_diver_F;
class B_Pilot_F;
// Arma 3 Atlas
class B_ADF_CBRN_Man_Oversuit_01_Aucamo_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_B_ADF_CBRN_Suit_01_Aucamo_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Aucamo_CO.paa"};
};
class B_ADF_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_ADF_F;
	genericNames = AustralianMen;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_default
	};
};
class B_ADF_Uniform_01_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ADF_Uniform_01_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa"};
};
class B_ADF_Uniform_01_tshirt_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ADF_Uniform_01_tanktop_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\basicbody_aucamo_CO.paa"
	};
};
class B_ADF_Uniform_01_shortsleeve_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa"};
};
class B_ADF_Uniform_01_coveralls_F: B_Pilot_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ADF_Uniform_01_coveralls_F;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_aucamo_CO.paa"};
};
class B_ADF_Uniform_01_wetsuit_F: B_diver_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ADF_Uniform_01_wetsuit_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_suit_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"
	};
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class B_ADF_Soldier_base_F: B_ADF_Man_Base_F
{
	uniformClass = U_B_ADF_Uniform_01_F;
};
class B_ADF_Soldier_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class B_ADF_Soldier_unarmed_F: B_ADF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class B_ADF_Soldier_A_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Carryall_cbr_Ammo;
	weapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_ADF_Soldier_AAR_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_AssaultPack_khk_AAR;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
};
class B_ADF_Soldier_AR_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_RPK12_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK12_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class B_ADF_Soldier_lite_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_Booniehat_aucamo_hs,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_aucamo_hs,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
};
class B_ADF_Soldier_GL_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_AK12_GL_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class B_ADF_soldier_M_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		srifle_DMR_05_DMS_LP_BI_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_05_DMS_LP_BI_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class B_ADF_Officer_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	weapons[] =
	{
		arifle_AUG_C_F,
		hgun_Pistol_heavy_01_black_MRD_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		hgun_Pistol_heavy_01_black_MRD_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_Beret_grn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Beret_grn,
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
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_casual
	};
};
class B_ADF_Soldier_SL_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_ADF_IR_Grenade),
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
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_ADF_IR_Grenade),
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
class B_ADF_Soldier_TL_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(11Rnd_45ACP_Mag),
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
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Survivor_F: B_ADF_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Survivor_F.jpg";
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
class B_ADF_RadioOperator_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_RadioBag_01_aucamo_F;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = RadioOperator;
};
class B_ADF_Soldier_AA_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Kitbag_khk_AA;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_coyote_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_coyote_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Soldier_AT_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Kitbag_khk_AT;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Soldier_LAT_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_AssaultPack_khk_LAT_F;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		launch_MRAWS_coyote_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		launch_MRAWS_coyote_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_ADF_Soldier_AAA_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Carryall_cbr_AAA;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Soldier_AAT_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Carryall_cbr_AAT;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class B_ADF_Support_GMG_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Support_GMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_GMG_01_Weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Support_MG_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Support_MG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_HMG_01_Weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Support_Mort_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Support_Mort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_Mortar_01_Weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Support_AMG_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Support_AMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_HMG_01_support_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Support_AMort_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_Mortar_01_support_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(B_ADF_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class B_ADF_Engineer_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_Kitbag_khk_Eng;
	weapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_erco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Soldier_Exp_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
    linkedItems[] =
    {
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
    };
	backpack = B_Kitbag_khk_Exp;
    weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_soldier_Mine_F: B_ADF_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_soldier_Mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_cbr_Mine;
};
class B_ADF_Soldier_Repair_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_Repair_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
    linkedItems[] =
    {
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
    };
	backpack = B_AssaultPack_khk_Repair;
    weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Soldier_CBRN_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_CBRN_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_ADF_CBRN_Suit_01_Autumn_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_F,
		V_CarrierRigKBT_01_light_Olive_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_F,
		V_CarrierRigKBT_01_light_Olive_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Medic_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_headset_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	backpack = B_AssaultPack_khk_Medic;
	weapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_aco_pointer_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
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
class B_ADF_Crew_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_B_ADF_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		H_HelmetCrew_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_aucamo_F
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class B_ADF_Helipilot_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
    linkedItems[] =
    {
        H_PilotHelmetHeli_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_aucamo_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_aucamo_F
    };
	weapons[] =
	{
		SMG_01_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ADF_Helicrew_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_B_ADF_Uniform_01_F;
    linkedItems[] =
    {
        H_CrewHelmetHeli_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_aucamo_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_B_aucamo_F,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_aucamo_F
    };
	weapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ADF_Soldier_UAV_F: B_ADF_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = U_B_ADF_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_aucamo_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
        B_ADF_UAVTerminal,
		NVGoggles_aucamo_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_aucamo_F,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
        B_ADF_UAVTerminal,
		NVGoggles_aucamo_F
	};
	backpack = B_ADF_UAV_01_backpack_F;
	weapons[] =
    {
        arifle_AUG_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_aco_pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class B_ADF_soldier_UAV_06_F: B_ADF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_ADF_UAV_06_backpack_F;
};
class B_ADF_soldier_UAV_06_medical_F: B_ADF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_ADF_UAV_06_medical_backpack_F;
};
class B_ADF_soldier_UGV_02_Demining_F: B_ADF_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_ADF_UGV_02_Demining_backpack_F;
};
class B_ADF_Fighter_Pilot_F: B_ADF_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ADF_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_B_ADF_Uniform_01_coveralls_F;
    linkedItems[] =
    {
        H_PilotHelmetFighter_B_aucamo_F,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B_aucamo_F,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ADF_Soldier_universal_F: B_ADF_Soldier_F
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