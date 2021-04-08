/* Remnants */
class Theseus_O_R_Man_Base_F: I_Soldier_base_F
{
    scope = private;
	faction = Theseus_OPF_R_F;
	genericNames = GreekMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
	side = TEast;
};
class Theseus_O_R_Soldier_Base_F: Theseus_O_R_Man_Base_F
{
	uniformClass = U_BG_Guerilla1_2_F;
};
class Theseus_O_R_Soldier_1_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA1_dgtl,
		H_HelmetIA,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA1_dgtl,
		H_HelmetIA,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade_Guer)
	};
	role = Rifleman;
};
class Theseus_O_R_Soldier_2_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_HighCommand_ModuleDescription_AnyBrain_0;
	uniformClass = U_BG_Guerilla2_3;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA2_dgtl,
		H_MilCap_dgtl,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA2_dgtl,
		H_MilCap_dgtl,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_GL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_GL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
};
class Theseus_O_R_Soldier_3_F: Theseus_O_R_Soldier_Base_F
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Medic;
	uniformClass = U_BG_Leader;
	backpack = B_FieldPack_green_RemnantsMedic_F;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacVest_grn,
		H_Helmet_Skate,,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacVest_grn,
		H_Helmet_Skate,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_Katiba_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_Katiba_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	respawnMagazines[] = {mag_6(30Rnd_65x39_caseless_green)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
};
class Theseus_O_R_Soldier_4_F: Theseus_O_R_Soldier_Base_F
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RPK_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(9Rnd_45ACP_Mag)
	};
	respawnMagazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(9Rnd_45ACP_Mag)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
};
class Theseus_O_R_Soldier_5_F: Theseus_O_R_Soldier_Base_F
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_BG_Guerilla1_3;
	backpack = B_FieldPack_green_RemnantsRPG_AT_F;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		SMG_03C_camo,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		SMG_03C_camo,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(50Rnd_570x28_SMG_03),
        RPG32_F
	};
	respawnMagazines[] = 
	{
        mag_6(50Rnd_570x28_SMG_03),
        RPG32_F
	};
	cost = 130000;
	threat[] =
    {
        0.8,    // Soft
        0.8,    // Armor
        0.3     // Air
    };
	icon = iconManAT;
	role = MissileSpecialist;
};
class Theseus_O_R_Soldier_6_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_BG_leader;
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacChestRig_grn_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_TacChestRig_grn_F,
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
};
class Theseus_O_R_Soldier_7_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
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
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	linkedItems[] = 
	{
		H_Booniehat_dgtl,
        G_Bandanna_oli,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Booniehat_dgtl,
        G_Bandanna_oli,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] =
	{
		srifle_EBR_DMS_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_EBR_DMS_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = {mag_3(20Rnd_762x51_Mag)};
	respawnMagazines[] = {mag_3(20Rnd_762x51_Mag)};
	cost = 250000;
	role = Marksman;
};
class Theseus_O_R_Soldier_8_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	uniformClass = U_BG_leader;
	backpack = B_FieldPack_green_RemnantsExp_F;
	linkedItems[] = 
	{
		V_ChestrigF_rgr,
        G_Balaclava_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_ChestrigF_rgr,
        G_Balaclava_oli,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug)
    };
	respawnMagazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug)
    };
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
};
class Theseus_O_R_Crew_F: Theseus_O_R_Soldier_Base_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Crew_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_crew_F0;
	linkedItems[] = 
	{
		V_BandollierB_oli,
        G_Bandanna_shades,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		V_BandollierB_oli,
        G_Bandanna_shades,
		H_Cap_headphones,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		SMG_03C_camo,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		SMG_03C_camo,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(HandGrenade_Guer)
	};
	respawnMagazines[] = 
	{
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(HandGrenade_Guer)
	};
	camouflage = 1.6;
    cost = 93000;
	role = Crewman;
};
class Theseus_O_R_Soldier_universal_F: Theseus_O_R_Soldier_1_F
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
class Theseus_O_R_Soldier_Base_unarmed_F: Theseus_O_R_Soldier_1_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Theseus\EditorPreviews_F_Theseus\Data\CfgVehicles\Theseus_O_R_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA1_dgtl,
		H_HelmetIA,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_oli,
		V_PlateCarrierIA1_dgtl,
		H_HelmetIA,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};