class O_R_Heli_Attack_02_dynamicLoadout_F: Heli_Attack_02_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Attack_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.5;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_helipilot_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
		"\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"
	};
	availableForSupportTypes[]=
	{
		CAS_Heli,
		Transport
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_black_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
                };
            };
            class Presets: Presets
            {
                class Empty: Empty{};
                class Default: Default
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class AT: AT
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class HAT: HAT
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class CAS: CAS
                {
                    attachment[] =
                    {
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonRack_20Rnd_Rocket_80mm
                    };
                };
            };
		};
	};
};