class O_R_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	accuracy = 1.5;
	icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
	picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	availableForSupportTypes[] =
	{
		Drop,
		Transport,
		CAS_Heli
	};
	cost = 2000000;
	threat[] = {0.6,0.8,0.5};
	textureList[] =
	{
		Black,1,
		Blackcustom,0
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
		class TransportPylonsComponent
		{
			uiPicture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
			class Pylons
			{
				class PylonLeft1
				{
					attachment = PylonRack_7Rnd_Rocket_50mm;
					priority = 5;
					hardpoints[] =
					{
						DAGR,
						DAR,
						O_S5,
						O_ORCA_RIGHT_PYLON,
						20MM_TWIN_CANNON,
						SCALPEL_1RND_EJECTOR,
						B_ASRRAM_EJECTOR
					};
					UIposition[] = {0.06,0.4};
				};
				class PylonRight1: PylonLeft1
				{
					attachment = PylonRack_7Rnd_Rocket_50mm;
					mirroredMissilePos = 1;
					hardpoints[] =
					{
						DAGR,
						DAR,
						O_S5,
						20MM_TWIN_CANNON,
						SCALPEL_1RND_EJECTOR,
						B_ASRRAM_EJECTOR
					};
					UIposition[] = {0.59,0.4};
				};
			};
			class Presets
			{
				class Empty
				{
					displayName = $STR_empty;
					attachment[] = {};
				};
				class Default
				{
					displayName = $STR_vehicle_default;
					attachment[] =
					{
						PylonRack_7Rnd_Rocket_50mm,
						PylonRack_7Rnd_Rocket_50mm
					};
				};
				class AT
				{
					displayName = $STR_A3_Cfgmagazines_titan_at_dns;
					attachment[] =
					{
						PylonRack_12Rnd_PG_missiles,
						PylonRack_12Rnd_PG_missiles
					};
				};
				class CAS
				{
					displayName = $STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP;
					attachment[] =
					{
						PylonRack_12Rnd_missiles,
						PylonRack_12Rnd_missiles
					};
				};
			};
		};
	};
};
class O_R_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Light_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeGarage = private;
	displayName = $STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0;
	accuracy = 1.5;
	cost = 900000;
	threat[] = {0.3,0.2,0.3};
	radarType = CM_Lock_Radar;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_helipilot_F};
	textureList[] =
	{
		Black,1,
		Blackcustom,0
	};
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
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
};