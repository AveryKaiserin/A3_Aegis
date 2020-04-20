class O_R_Heli_Transport_04_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
	};
	supplyRadius = 2;
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.49;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	slingLoadMaxCargoMass = 13500;
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	memoryPointDriverOptics = Slingload_cam;
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "W";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.5;
				minFov = 0.5;
				maxFov = 0.5;
				directionStabilized = true;
				visionMode[] =
				{
					Normal,
					NVG
				};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
			};
			showMiniMapInOptics = false;
			showUAVViewpInOptics = false;
			showSlingLoadManagerInOptics = true;
		};
		minTurn = 0;
		maxTurn = 0;
		initTurn = 0;
		minElev = 80;
		maxElev = 80;
		initElev = 80;
		maxXRotSpeed = 0.5;
		maxYRotSpeed = 0.5;
		pilotOpticsShowCursor = true;
		controllable = false;
	};
};
class O_R_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_ammo_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_ammo_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_ammo_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_ammo_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 10;
	transportAmmo = 1000000000000;
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.735;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	textureList[] = {Black,1};
};
class O_R_Heli_Transport_04_bench_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_bench_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_bench_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_bench_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_bench_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_bench_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 2;
	availableForSupportTypes[] = {Transport};
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.49;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	transportSoldier = 0;
	class CargoTurret;
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = passenger_inside_2;
			gunnerCompartments = Compartment2;
			memoryPointsGetInGunner = Cargo_R1_pos;
			memoryPointsGetInGunnerDir = Cargo_R1_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_R1;
			proxyIndex = 1;
			maxElev = 20;
			minElev = -45;
			maxTurn = 55;
			minTurn = -65;
			isPersonTurret = 1;
			ejectDeadGunner = 0;
			class dynamicViewLimits
			{
				CargoTurret_02[] = {-65,95};
				CargoTurret_03[] = {-75,95};
				CargoTurret_04[] = {-80,95};
			};
		};
		class CargoTurret_02: CargoTurret_01
		{
			proxyIndex = 2;
			gunnerCompartments = Compartment3;
			memoryPointsGetInGunner = Cargo_R2_pos;
			memoryPointsGetInGunnerDir = Cargo_R2_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_R2;
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-95,65};
				CargoTurret_03[] = {-65,95};
				CargoTurret_04[] = {-75,95};
			};
		};
		class CargoTurret_03: CargoTurret_01
		{
			proxyIndex = 3;
			gunnerCompartments = Compartment4;
			memoryPointsGetInGunner = Cargo_R3_pos;
			memoryPointsGetInGunnerDir = Cargo_R3_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_R3;
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-95,75};
				CargoTurret_02[] = {-95,65};
				CargoTurret_04[] = {-65,95};
			};
		};
		class CargoTurret_04: CargoTurret_01
		{
			proxyIndex = 4;
			gunnerCompartments = Compartment5;
			memoryPointsGetInGunner = Cargo_R4_pos;
			memoryPointsGetInGunnerDir = Cargo_R4_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_R4;
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-95,80};
				CargoTurret_02[] = {-95,75};
				CargoTurret_03[] = {-95,65};
			};
		};
		class CargoTurret_05: CargoTurret_01
		{
			gunnerCompartments = Compartment6;
			memoryPointsGetInGunner = Cargo_L4_pos;
			memoryPointsGetInGunnerDir = Cargo_L4_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_L4;
			proxyIndex = 5;
			class dynamicViewLimits
			{
				CargoTurret_06[] = {-65,95};
				CargoTurret_07[] = {-75,95};
				CargoTurret_08[] = {-80,95};
			};
		};
		class CargoTurret_06: CargoTurret_05
		{
			proxyIndex = 6;
			gunnerCompartments = Compartment7;
			memoryPointsGetInGunner = Cargo_L3_pos;
			memoryPointsGetInGunnerDir = Cargo_L3_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_L3;
			class dynamicViewLimits
			{
				CargoTurret_05[] = {-95,65};
				CargoTurret_07[] = {-65,95};
				CargoTurret_08[] = {-75,95};
			};
		};
		class CargoTurret_07: CargoTurret_05
		{
			proxyIndex = 7;
			gunnerCompartments = Compartment8;
			memoryPointsGetInGunner = Cargo_L2_pos;
			memoryPointsGetInGunnerDir = Cargo_L2_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_L2;
			class dynamicViewLimits
			{
				CargoTurret_05[] = {-95,75};
				CargoTurret_06[] = {-95,65};
				CargoTurret_08[] = {-65,95};
			};
		};
		class CargoTurret_08: CargoTurret_05
		{
			proxyIndex = 8;
			gunnerCompartments = Compartment9;
			memoryPointsGetInGunner = Cargo_L1_pos;
			memoryPointsGetInGunnerDir = Cargo_L1_dir;
			gunnerName = $STR_A3_Turrets_CargoTurret_L1;
			class dynamicViewLimits
			{
				CargoTurret_05[] = {-95,80};
				CargoTurret_06[] = {-95,75};
				CargoTurret_07[] = {-95,65};
			};
		};
	};
	cargoAction[] =
	{
		passenger_apc_narrow_generic03,
		passenger_apc_narrow_generic01,
		passenger_apc_generic03,
		passenger_apc_narrow_generic02,
		passenger_apc_narrow_generic02,
		passenger_generic01_foldhands,
		passenger_generic01_leanleft,
		passenger_apc_narrow_generic03
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Bench_black_CO.paa"
	};
	textureList[] = {Black,1};
	class AnimationSources: AnimationSources
	{
		class Bench_default_source
		{
			source = user;
			initPhase = false;
			animPeriod = 0.001;
		};
		class Bench_rus_source: Bench_default_source
		{
			initPhase = true;
		};
	};
};
class O_R_Heli_Transport_04_box_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_box_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_box_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_box_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_box_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_box_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 5;
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.735;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	textureList[] = {Black,1};
	class TransportMagazines
	{
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(30Rnd_545x39_black_Mag_F,24);
		mag_xx(10Rnd_762x54_Mag,12);
		mag_xx(75Rnd_762x39_AK12_Mag_F,8);
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
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
		weap_xx(arifle_AK12_GL_545_F,1);
		weap_xx(arifle_AK12U_545_F,1);
		weap_xx(arifle_RPK12_F,1);
		weap_xx(srifle_DMR_01_black_F,1);
		weap_xx(launch_RPG32_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO_grn,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_nightstalker,1);
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
		item_xx(O_NVGoggles_grn_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
		bag_xx(B_FieldPack_taiga_F,2);
	};
};
class O_R_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_covered_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_covered_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_covered_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_covered_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 5;
	transportSoldier = 14;
	availableForSupportTypes[] =
	{
		Drop,
		Transport
	};
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_covered.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.575;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	maxSpeed = 250;
	fuelCapacity = 2500;
	fuelConsumptionRate = 0.138;
	hideWeaponsCargo = true;
	cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	class CargoTurret;
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = passenger_inside_2;
			gunnerCompartments = Compartment2;
			memoryPointsGetInGunner = Cargo_R_pos;
			memoryPointsGetInGunnerDir = Cargo_R_dir;
			gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
			proxyIndex = 15;
			isPersonTurret = true;
			enabledByAnimationSource = Door_6_source;
			playerPosition = 2;
			soundAttenuationTurret = HeliAttenuationRamp;
			disableSoundAttenuation = false;
			class TurnOut
			{
				limitsArrayTop[] = 
				{
					{2.3004,-99.719803},
					{4.9784999,-86.818703},
					{5.6223001,-80.066597},
					{2.4619999,-66.781799}
				};
				limitsArrayBottom[] = 
				{
					{-32.9916,-98.944901},
					{-34.2187,-70.423798},
					{-34.274101,-65.303497}
				};
			};
			class TurnIn: TurnOut
			{
			};
		};
		class CargoTurret_02: CargoTurret_01
		{
			memoryPointsGetInGunner = Cargo_L_pos;
			memoryPointsGetInGunnerDir = Cargo_L_dir;
			gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
			proxyIndex = 16;
			class TurnOut
			{
				limitsArrayTop[] = 
				{
					{-34.4785,-59.8451},
					{-36.522999,65.375397},
					{0.3459,71.621597},
					{2.1489999,79.6409},
					{2.0386,87.165802},
					{-0.0147,95}
				};
				limitsArrayBottom[] =
				{
					{-45,65.375397},
					{-36.927502,72.666496},
					{-37.094002,95}
				};
			};
			class TurnIn: TurnOut
			{
			};
		};
	};
	cargoAction[] =
	{
		passenger_apc_generic04,
		passenger_apc_generic02,
		passenger_apc_generic03,
		passenger_apc_generic04,
		passenger_apc_narrow_generic01,
		passenger_apc_narrow_generic02,
		passenger_apc_generic03,
		passenger_apc_narrow_generic03,
		passenger_generic01_foldhands,
		passenger_apc_generic03,
		passenger_apc_narrow_generic03,
		passenger_apc_generic01,
		passenger_apc_generic01,
		passenger_generic01_leanleft,
		passenger_generic01_leanright,
		passenger_low01
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	textureList[] = {Black,1};
	class AnimationSources: AnimationSources
	{
		class Door_4_source: Door_1_source
		{
			animPeriod = 2;
			soundPosition = Door_4_trigger;
		};
		class Door_5_source: Door_1_source
		{
			animPeriod = 2;
			soundPosition = Door_5_trigger;
		};
		class Door_6_source: Door_1_source
		{
			animPeriod = 2;
			soundPosition = Door_6_trigger;
		};
	};
	class UserActions: UserActions
	{
		class OpenDoor_4: OpenDoor_1
		{
			position = Door_4_trigger;
			condition = "((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') < 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_4_source', 1])";
		};
		class CloseDoor_4: CloseDoor_1
		{
			position = Door_4_trigger;
			condition = "((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') >= 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_4_source', 0])";
		};
		class OpenDoor_5: OpenDoor_1
		{
			position = Door_5_trigger;
			condition = "((this getVariable ['bis_disabled_Door_5',1]) isEqualTo 0) && {((this animationPhase 'Door_5_move_1') < 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_5_source', 1])";
		};
		class CloseDoor_5: CloseDoor_1
		{
			position = Door_5_trigger;
			condition = "((this getVariable ['bis_disabled_Door_5',1]) isEqualTo 0) && {((this animationPhase 'Door_5_move_1') >= 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_5_source', 0])";
		};
		class OpenDoor_6: OpenDoor_1
		{
			position = Door_6_trigger;
			condition = "((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') < 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_6_source', 1])";
		};
		class CloseDoor_6: CloseDoor_1
		{
			position = Door_6_trigger;
			condition = "((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') >= 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_6_source', 0])";
		};
		class Ramp_Open: OpenDoor_6
		{
			userActionID = 60;
			displayName = $STR_ACTION_RAMP_OPEN0;
			textToolTip = $STR_ACTION_RAMP_OPEN0;
			position = "";
			showWindow = false;
			condition = "this doorPhase 'Door_6_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		};
		class Ramp_Close: CloseDoor_6
		{
			userActionID = 61;
			displayName = $STR_ACTION_RAMP_CLOSE0;
			textToolTip = $STR_ACTION_RAMP_CLOSE0;
			position = "";
			showWindow = false;
			condition = "this doorPhase 'Door_6_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		};
	};
	class HitPoints: HitPoints
	{
		class Glass_Pod_01_hitpoint
		{
			name = Glass_Pod_01_hit;
			visual = Glass_Pod_01;
			convexComponent = Glass_Pod_01;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_02_hitpoint
		{
			name = Glass_Pod_02_hit;
			visual = Glass_Pod_02;
			convexComponent = Glass_Pod_02;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_03_hitpoint
		{
			name = Glass_Pod_03_hit;
			visual = Glass_Pod_03;
			convexComponent = Glass_Pod_03;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_04_hitpoint
		{
			name = Glass_Pod_04_hit;
			visual = Glass_Pod_04;
			convexComponent = Glass_Pod_04;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_05_hitpoint
		{
			name = Glass_Pod_05_hit;
			visual = Glass_Pod_05;
			convexComponent = Glass_Pod_05;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_06_hitpoint
		{
			name = Glass_Pod_06_hit;
			visual = Glass_Pod_06;
			convexComponent = Glass_Pod_06;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_07_hitpoint
		{
			name = Glass_Pod_07_hit;
			visual = Glass_Pod_07;
			convexComponent = Glass_Pod_07;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_08_hitpoint
		{
			name = Glass_Pod_08_hit;
			visual = Glass_Pod_08;
			convexComponent = Glass_Pod_08;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_09_hitpoint
		{
			name = Glass_Pod_09_hit;
			visual = Glass_Pod_09;
			convexComponent = Glass_Pod_09;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,19);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,9);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
};
class O_R_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_fuel_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_fuel_F.p3d";
	side = TEast;
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_fuel_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_fuel_CA.paa";
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 10;
	transportFuel = 1000000000000;
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.735;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Fuel_black_CO.paa"
	};
	textureList[] = {Black,1};
};
class O_R_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_medevac_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_medevac_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_medevac_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_medevac_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	transportSoldier = 4;
	supplyRadius = 5;
	attendant = true;
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_covered.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.575;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	cargoAction[] =
	{
		passenger_injured_medevac_truck03,
		passenger_injured_medevac_truck02,
		passenger_injured_medevac_truck01,
		passenger_low01
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	textureList[] = {Black,1};
	class AnimationSources: AnimationSources
	{
		class Door_4_source: Door_1_source
		{
			animPeriod = 2;
			soundPosition = Door_4_trigger;
		};
		class Door_6_source: Door_1_source
		{
			animPeriod = 2;
			soundPosition = Door_6_trigger;
		};
	};
	class UserActions: UserActions
	{
		class OpenDoor_4: OpenDoor_1
		{
			position = Door_4_trigger;
			condition = "((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') < 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_4_source', 1])";
		};
		class CloseDoor_4: CloseDoor_1
		{
			position = Door_4_trigger;
			condition = "((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') >= 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_4_source', 0])";
		};
		class OpenDoor_6: OpenDoor_1
		{
			position = Door_6_trigger;
			condition = "((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') < 0.5) &&  (alive this)}";
			statement = "(this animateDoor ['Door_6_source', 1])";
		};
		class CloseDoor_6: CloseDoor_1
		{
			position = Door_6_trigger;
			condition = "((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') >= 0.5) && (alive this)}";
			statement = "(this animateDoor ['Door_6_source', 0])";
		};
	};
	class HitPoints: HitPoints
	{
		class Glass_Pod_01_hitpoint
		{
			name = Glass_Pod_01_hit;
			visual = Glass_Pod_01;
			convexComponent = Glass_Pod_01;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_02_hitpoint
		{
			name = Glass_Pod_02_hit;
			visual = Glass_Pod_02;
			convexComponent = Glass_Pod_02;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_03_hitpoint
		{
			name = Glass_Pod_03_hit;
			visual = Glass_Pod_03;
			convexComponent = Glass_Pod_03;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_04_hitpoint
		{
			name = Glass_Pod_04_hit;
			visual = Glass_Pod_04;
			convexComponent = Glass_Pod_04;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_05_hitpoint
		{
			name = Glass_Pod_05_hit;
			visual = Glass_Pod_05;
			convexComponent = Glass_Pod_05;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
		class Glass_Pod_06_hitpoint
		{
			name = Glass_Pod_06_hit;
			visual = Glass_Pod_06;
			convexComponent = Glass_Pod_06;
			armor = 2;
			passThrough = 0;
			material = -1;
			radius = 0.1;
			class DestructionEffects{};
		};
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,15);
		item_xx(Toolkit,1);
		item_xx(Medikit,2);
	};
};
class O_R_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_repair_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_repair_F0;
	model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_repair_F.p3d";
	icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_repair_CA.paa";
	picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_repair_CA.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	supplyRadius = 10;
	transportRepair = 1000000000000;
	slingLoadMemoryPoint = "";
	class RotorLibHelicopterProperties
	{
		RTDconfig = "\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
		autoHoverCorrection[] = {4,0,0};
		defaultCollective = 0.735;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		stressDamagePerSec = 0.01;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxTorque = 12000;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
		retreatBladeStallWarningSpeed = 83;
	};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	textureList[] = {Black,1};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,5);
		item_xx(Toolkit,2);
		item_xx(Medikit,1);
	};
};