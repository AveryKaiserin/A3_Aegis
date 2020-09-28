// Arma 3
class I_soldier_F;
// Arma 3 Police
class Police_I_P_Man_Base_F: I_soldier_F
{
	scope = private;
    scopeCurator = private;
	faction = Aegis_IND_P_F;
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
class Police_I_P_PoliceOfficer_Base_F: Police_I_P_Man_Base_F
{
    uniformClass = U_Marshal;
};
class Police_I_P_PoliceOfficer_F: Police_I_P_PoliceOfficer_Base_F
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
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		SMG_03C_black,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_I_P_PoliceOfficer_Rifle_F: Police_I_P_PoliceOfficer_Base_F
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
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Beret_blk_POLICE,
        G_WirelessEarpiece_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Atlas_arifle_G36C_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_G36C_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	cost = 100000;
	role = Rifleman;
};
class Police_I_P_PoliceOfficer_SG_F: Police_I_P_PoliceOfficer_Base_F
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
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		H_Cap_police,
        G_WirelessEarpiece_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_sgun_Mp153_classic_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_sgun_Mp153_classic_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(Aegis_4Rnd_12Gauge_Pellets),
        mag_3(Aegis_4Rnd_12Gauge_Slug),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(Aegis_4Rnd_12Gauge_Pellets),
        mag_3(Aegis_4Rnd_12Gauge_Slug),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
    cost = 130000;
	role = Rifleman;
    threat[] = {1,0.3,0.1};
};
class Police_I_P_TacPoliceOfficer_Base_F: Police_I_P_PoliceOfficer_Base_F
{
    uniformClass = Police_U_I_P_PoliceUniform_gloves_F;
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
    icon = iconManRecon;
};
class Police_I_P_TacPoliceOfficer_F: Police_I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_F0;
	linkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Atlas_arifle_G36C_Holo_FL_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_G36C_Holo_FL_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_I_P_TacPoliceOfficer_Sniper_F: Police_I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_Sniper_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	uniformClass = Police_U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		Aegis_H_Cap_headphones_blk,
        Aegis_G_Balaclava_light_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		Aegis_H_Cap_headphones_blk,
        Aegis_G_Balaclava_light_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_srifle_DMR_06_black_AMS_BI_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		Aegis_srifle_DMR_06_black_AMS_BI_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons,
        Binocular
	};
	magazines[] =
	{
		mag_6(20Rnd_762x51_Mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(20Rnd_762x51_Mag),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_I_P_TacPoliceOfficer_SG_F: Police_I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_SG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_TacPoliceOfficer_SG_F0;
	linkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_G_blk_F,
		DefaultManPoliceLinkedItems
	};
	weapons[] =
	{
		Aegis_sgun_Mp153_black_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_sgun_Mp153_black_F,
		Aegis_hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(Aegis_4Rnd_12Gauge_Pellets),
        mag_3(Aegis_4Rnd_12Gauge_Slug),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
        mag_3(Aegis_4Rnd_12Gauge_Pellets),
        mag_3(Aegis_4Rnd_12Gauge_Slug),
		mag_2(Aegis_17Rnd_9x21_Mag),
        mag_2(Chemlight_blue)
	};
	role = Rifleman;
};
class Police_I_P_TacPoliceOfficer_UGV_02_F: Police_I_P_TacPoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_TacPoliceOfficer_UGV_02_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_ION_soldier_UGV_02_Demining_F0;
	uniformClass = Police_U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_blk_F,
        I_UavTerminal,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		Police_V_CarrierRigKBT_01_light_POLICE_F,
		Atlas_H_HelmetSpecter_black_headset_F,
        Aegis_G_Balaclava_light_blk_F,
        I_UavTerminal,
		DefaultManPoliceLinkedItems
	};
    backpack = Police_I_P_UGV_02_Demining_backpack_F;
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
class Police_I_P_Helipilot_F: Police_I_P_PoliceOfficer_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Helipilot_F.jpg";
	scope = protected;
    scopeCurator = private;
	displayName = $STR_B_Helipilot_F0;
    uniformClass = Police_U_I_P_PoliceUniform_F;
	linkedItems[] =
	{
		V_TacVest_blk_POLICE,
		Aegis_H_Cap_headphones_blk,
		G_Aviators,
		DefaultManPoliceLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk_POLICE,
		Aegis_H_Cap_headphones_blk,
		G_Aviators,
		DefaultManPoliceLinkedItems
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