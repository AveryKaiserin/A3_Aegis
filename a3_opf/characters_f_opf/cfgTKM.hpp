// Arma 3
class I_G_Soldier_SL_F;
class I_G_Soldier_M_F;
// Arma 3 Apex
class I_C_Soldier_Bandit_3_F;
// Arma 3 Opposing Forces
class I_T_Man_Base_F: I_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = IND_T_F;
	genericNames = TakistaniMen;
	identityTypes[] = 
	{
		LanguagePER_F,
		Head_TK,
		G_GUERIL_default
	};
};
class I_T_Guerilla3_3_F: I_G_Soldier_M_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_IG_Guerilla3_3_F;
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hunter_bushman_CO.paa"};
};
class I_T_Uniform_01_hex_F: I_G_Soldier_SL_F
{
	uniformClass = U_I_T_Uniform_01_hex_F;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_hex_CO.paa",
		"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa"
	};
};
class I_T_Uniform_01_urb_F: I_T_Uniform_01_hex_F
{
	uniformClass = U_I_T_Uniform_01_urb_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_urb_CO.paa",
		"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa"
	};
};
class I_T_Uniform_01_ghex_F: I_T_Uniform_01_hex_F
{
	uniformClass = U_I_T_Uniform_01_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_tna_CO.paa",
		"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"
	};
};
class I_T_Uniform_01_tshirt_black_F: I_C_Soldier_Bandit_3_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_I_T_Uniform_01_tshirt_black_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\c_cloth1_black_CO.paa",
		"\A3\Characters_F_Orange\Uniforms\Data\C_Mechanic_01_camo2_CO.paa"
	};
};
class I_T_Soldier_Base_F: I_T_Man_Base_F
{
	uniformClass = U_I_T_Uniform_01_tshirt_black_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class I_T_Soldier_1_F: I_T_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Rifle)";
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
	};
	role = Rifleman;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_Shemag_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_2_F: I_T_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militia Leader (Rifle)";
	uniformClass = U_I_T_Uniform_01_urb_F;
	linkedItems[] = 
	{
		V_TacVest_gry,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_TacVest_gry,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
    headgearList[] =
	{
		"",2,
		H_Beret_blk,1,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_Shemag_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_3_F: I_T_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Bonesetter (Medikit)";
	uniformClass = U_C_E_LooterJacket_01_F;
	backpack = B_FieldPack_cbr_Medic_F;
	linkedItems[] = {DefaultManGuerillaLinkedItems};
	respawnLinkedItems[] = {DefaultManGuerillaLinkedItems};
	weapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	magazines[] = {mag_3(30Rnd_762x39_Mag_F)};
	respawnMagazines[] = {mag_3(30Rnd_762x39_Mag_F)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_Shemag_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_4_F: I_T_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Machine Gun)";
	uniformClass = U_I_C_Soldier_Bandit_3_F;
	backpack = B_Kitbag_tan_AR_F;
	linkedItems[] =
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RPK_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK_F,
		DefaultManWeapons
	};
	magazines[] = {mag_3(75Rnd_762x39_Mag_F)};
	respawnMagazines[] = {mag_3(75Rnd_762x39_Mag_F)};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_5_F: I_T_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (Launcher)";
	uniformClass = U_IG_Guerilla3_3_F;
	backpack = B_FieldPack_cbr_RPG_F;
	linkedItems[] =
	{
		V_BandollierB_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_blk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
        launch_RPG7_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
        launch_RPG7_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_F),
        RPG7_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_F),
        RPG7_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_Shemag_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_6_F: I_T_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Militiaman (UGL)";
	uniformClass = U_I_T_Uniform_01_hex_F;
	linkedItems[] = 
	{
		V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_GL_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_GL_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_ShemagOpen_khk,2,
        H_Shemag_khk_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_7_F: I_T_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Watcher (Rifle)";
	uniformClass = U_IG_Guerilla3_1;
	linkedItems[] = 
	{
		V_BandollierB_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_BandollierB_khk,
		DefaultManGuerillaLinkedItems
	};
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
	magazines[] = {mag_6(10Rnd_Mk14_762x51_Mag)};
	respawnMagazines[] = {mag_6(10Rnd_Mk14_762x51_Mag)};
	cost = 250000;
	role = Marksman;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_Shemag_olive,2,
        H_Shemag_olive_hs,2,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_8_F: I_T_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Trapper (Explosives)";
	uniformClass = U_C_Mechanic_01_F;
	backpack = B_Kitbag_tan_exp_F;
	linkedItems[] =
	{
		V_TacChestRig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_545x39_Mag_F)};
	respawnMagazines[] = {mag_6(30Rnd_545x39_Mag_F)};
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
    headgearList[] =
	{
		"",2,
        H_Headset_light,1,
        H_FakeHeadgear_F,1
	};
};
class I_T_Soldier_universal_F: I_T_Soldier_1_F
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
class I_T_Soldier_Base_unarmed_F: I_T_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_Pocketed_wdl_F,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};