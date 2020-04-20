class O_T_Heli_Transport_04_F: O_Heli_Transport_04_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_ammo_F: O_Heli_Transport_04_ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_bench_F: O_Heli_Transport_04_bench_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_bench_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Bench_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_box_F: O_Heli_Transport_04_box_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_box_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
	class TransportMagazines
	{
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(30Rnd_580x42_Mag_F,24);
		mag_xx(20Rnd_650x39_Cased_Mag_F,12);
		mag_xx(100Rnd_580x42_Mag_F,8);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(chemlight_red,6);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(UGL_FlareRed_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,3);
		weap_xx(arifle_CTAR_GL_blk_F,1);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(srifle_DMR_07_blk_F,1);
		weap_xx(launch_RPG32_ghex_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Arco_ghex_F,1);
		item_xx(optic_DMS_ghex_F,1);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_02_F_blk,1);
		item_xx(bipod_02_F_hex,1);
		item_xx(NVGoggles_OPFOR,1);
		item_xx(O_NVGoggles_blk_F,1);
		item_xx(O_NVGoggles_ghex_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
		bag_xx(B_FieldPack_ghex_F,2);
	};
};
class O_T_Heli_Transport_04_covered_F: O_Heli_Transport_04_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_fuel_F: O_Heli_Transport_04_fuel_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Fuel_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_medevac_F: O_Heli_Transport_04_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class O_T_Heli_Transport_04_repair_F: O_Heli_Transport_04_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_repair_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Helipilot_F;
	typicalCargo[] = {O_T_Helipilot_F};
	textureList[] =
	{
		Black,1,
		GreenHex,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_T_Helicrew_F;
		};
	};
};
class Land_Pod_Heli_Transport_04_ammo_ghex_F: Land_Pod_Heli_Transport_04_ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_ammo_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
	};
};
class Land_Pod_Heli_Transport_04_bench_ghex_F: Land_Pod_Heli_Transport_04_bench_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_bench_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"};
};
class Land_Pod_Heli_Transport_04_box_ghex_F: Land_Pod_Heli_Transport_04_box_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_box_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
	};
};
class Land_Pod_Heli_Transport_04_covered_ghex_F: Land_Pod_Heli_Transport_04_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_covered_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
	};
};
class Land_Pod_Heli_Transport_04_fuel_ghex_F: Land_Pod_Heli_Transport_04_fuel_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_fuel_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"};
};
class Land_Pod_Heli_Transport_04_medevac_ghex_F: Land_Pod_Heli_Transport_04_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_medevac_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
	};
};
class Land_Pod_Heli_Transport_04_repair_ghex_F: Land_Pod_Heli_Transport_04_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_repair_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	textureList[] =
	{
		Black,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
	};
};