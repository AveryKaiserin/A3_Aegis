// Arma 3
class B_Soldier_recon_base;
// Arma 3 Atlas
class B_Recon_Operator_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_Recon_Operator_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = "Recon Operator (Rifle)";
    role = Rifleman;
    cost = 200000;
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_SCAR_rco_pointer_snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SCAR_rco_pointer_snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Recon_Operator_GL_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_Recon_Operator_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = "Recon Operator (UGL)";
    role = Grenadier;
    cost = 210000;
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_SCAR_GL_rco_pointer_snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_GL_rco_pointer_snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_light_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_light_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};