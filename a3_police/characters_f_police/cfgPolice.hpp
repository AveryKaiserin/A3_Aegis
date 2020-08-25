// Arma 3
class I_soldier_F;
class I_G_Soldier_LAT_F;
// Arma 3 Enoch
class I_E_Uniform_01_sweater_F;
// Arma 3 Police
class I_P_Man_Base_F: I_soldier_F
{
	scope = private;
    scopeCurator = private;
	faction = IND_P_F;
	genericNames = EnochMen;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Enoch,
        Head_Euro,
        G_CIVIL_male
	};
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1.rvmat",
			"A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1_injury.rvmat",
			"A3\Characters_F_Bootcamp\Guerrilla\Data\IG_Guerrilla_6_1_injury.rvmat",
			"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01.rvmat",
			"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_injury.rvmat",
			"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
		};
	};
};
class I_P_PoliceUniform_01_F: I_E_Uniform_01_sweater_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_I_P_PoliceUniform_F;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	hiddenSelectionsMaterials[] = {"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01.rvmat"};
};
class I_P_PoliceUniform_01_gloves_F: I_G_Soldier_LAT_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_I_P_PoliceUniform_gloves_F;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01_CO.paa"};
	hiddenSelectionsMaterials[] = {"A3_Police\Characters_F_Police\Uniforms\Data\I_P_PoliceUniform_01.rvmat"};
};
class I_P_PoliceOfficer_Base_F: I_P_Man_Base_F
{
    uniformClass = U_Marshal;
};
class I_P_PoliceOfficer_F: I_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_F0;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		SMG_03C_black,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class I_P_PoliceOfficer_Rifle_F: I_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_Rifle_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_Rifle_F0;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Beret_blk_POLICE,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Beret_blk_POLICE,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	cost = 100000;
	role = Rifleman;
};
class I_P_PoliceOfficer_SG_F: I_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_PoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_PoliceOfficer_SG_F0;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_classic_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
    cost = 130000;
	role = Rifleman;
    threat[] = {1,0.3,0.1};
};
class I_P_TacPoliceOfficer_Base_F: I_P_PoliceOfficer_Base_F
{
    uniformClass = U_I_P_PoliceUniform_gloves_F;
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
    icon = iconManRecon;
};
class I_P_TacPoliceOfficer_F: I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_blk_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_G36C_Holo_FL_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_FL_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class I_P_TacPoliceOfficer_Rifle_F: I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_Rifle_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_Rifle_F0;
	uniformClass = U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_headphones_blk,
        G_Balaclava_light_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_headphones_blk,
        G_Balaclava_light_blk_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		srifle_DMR_06_black_DMS_F,
		hgun_G17_black_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_black_DMS_F,
		hgun_G17_black_F,
		DefaultManWeapons,
        Binocular
	};
	magazines[] =
	{
		mag_6(20Rnd_762x51_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(20Rnd_762x51_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class I_P_TacPoliceOfficer_SG_F: I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_SG_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_G_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_G_blk_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		sgun_Mp153_black_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_black_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class I_P_TacPoliceOfficer_UGV_02_F: I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	// editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_UGV_02_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	uniformClass = U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_blk_F,
        I_P_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_POLICE_F,
		H_HelmetSpecter_black_headset_noflag_F,
        G_Balaclava_light_blk_F,
        I_P_UavTerminal,
		DefaultManLinkedItems
	};
    backpack = I_P_UGV_02_backpack_F;
	weapons[] =
	{
		arifle_G36C_Holo_FL_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_FL_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class I_P_Helipilot_F: I_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Helipilot_F.jpg";
	scope = protected;
    scopeCurator = private;
	displayName = $STR_B_Helipilot_F0;
    uniformClass = U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_headphones_blk,
		G_Aviators,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_headphones_blk,
		G_Aviators,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		SMG_03C_black,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        mag_2(Chemlight_blue)
	};
	cost = 50000;
	role = Crewman;
};