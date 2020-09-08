class I_E_MRAP_03_F: I_MRAP_03_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_MRAP_03_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_F;
    crew = I_E_Soldier_F;
    typicalCargo[] = {I_E_Soldier_lite_F};
    textureList[] = {EAF,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_EAF_CO.paa",
        "\A3\Data_F_Enoch\Vehicles\Turret_EAF_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_F,2);
    };
};
class I_E_MRAP_03_hmg_F: I_MRAP_03_hmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_MRAP_03_hmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_F;
    crew = I_E_Soldier_F;
    typicalCargo[] = {I_E_Soldier_lite_F};
    textureList[] = {EAF,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_EAF_CO.paa",
        "\A3\Data_F_Enoch\Vehicles\Turret_EAF_CO.paa"
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
        };
        class CommanderTurret: CommanderTurret{};
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_F,2);
    };
};
class I_E_MRAP_03_gmg_F: I_MRAP_03_gmg_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_MRAP_03_gmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_E_F;
    crew = I_E_Soldier_F;
    typicalCargo[] = {I_E_Soldier_lite_F};
    textureList[] = {EAF,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_EAF_CO.paa",
        "\A3\Data_F_Enoch\Vehicles\Turret_EAF_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
        mag_xx(200Rnd_65x39_cased_Box_Red,3);
        mag_xx(HandGrenade,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(11Rnd_45ACP_Mag,12);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_F,2);
    };
};