// Arma 3
class O_Soldier_base_F: SoldierEB
{
	class EventHandlers;
};
class O_Soldier_F: O_Soldier_base_F{};

// Arma 3 Atlas
class O_V_Soldier_TL_whex_F: O_V_Soldier_hex_F // Importing from normal Viper hex? But not sure how to do this exactly. New soldier class, Woodland Hex.
{
	author = $STR_A3_A_Heliotrope; // heliotrope! C:
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_hex_F.jpg"; // Changed to normal hex viper preview.
	faction = Atlas_OPF_V_F; // Changed to currently non-existant Viper Atlas faction.
	genericNames = ChineseMen;
	identityTypes[] =
	{
		LanguageCHI_F,
		Head_Asian,
		G_CIVIL_male
	};
    displayName = "$STR_A3_O_V_Soldier_TL_whex_F0";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_V_SpecialPurposeSuit_01_whex_F;
	backpack = B_ViperLightHarness_whex_TL_F;
	weapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		"30Rnd_65x39_caseless_green",
        "10Rnd_50BW_Mag_F",
        "16Rnd_9x21_Mag",
        "Chemlight_red",
        "Chemlight_red"
	};
	respawnMagazines[] =
	{
        "30Rnd_65x39_caseless_green",
        "10Rnd_50BW_Mag_F",
        "16Rnd_9x21_Mag",
        "Chemlight_red",
        "Chemlight_red"
	};
    items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	linkedItems[] =
	{
		H_HelmetO_ViperSP_whex_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ViperSP_whex_F,
		DefaultManLinkedItems
	};
};