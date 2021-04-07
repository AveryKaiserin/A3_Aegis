/*Raven PMC*/
class O_Raven_Man_Base_F: O_Soldier_F
{
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_default
	};
};
class O_Raven_Soldier_Base_F: O_Raven_Man_Base_F
{
	uniformClass = U_O_R_officer_noinsignia_taiga_F;
};
class O_Raven_Soldier_Base_F: O_Raven_Soldier_Base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_TL_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecter_F,
		DefaultManLinkedItems,
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecter_F,
		DefaultManLinkedItems,
	};
    weapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    cost = 450000;
};