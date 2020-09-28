#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	// Arma 3
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class RotorLibHelicopterProperties;
	};
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
		class AnimationSources: AnimationSources
		{
			class AddBenches;
			class AddBackseats;
			class AddDoors;
			class AddGunHolder;
			class AddHoldingFrame;
			class AddTread_Short;
			class AddTread;
			class AddScreen1;
			class AddCivilian_hide;
			class AddMusicUnit;
			class BenchL_Up;
			class BenchL_Up_instant;
			class BenchR_Up;
			class BenchR_Up_instant;
			class FLIR_HRot;
			class FLIR_VRot;
		};
		class Components;
		class TextureSources
		{
			class Blufor
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Indep
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
				factions[] = {IND_F};
			};
		};
		textureList[] =
		{
			Blufor,1,
			Black,0,
			Indep,0
		};
	};
	class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F
	{
		accuracy = 1;
		class UserActions
		{
			class BenchL_Fold
			{
				available = true;
			};
		};
		class TransportBackpacks
		{
			bag_xx(B_Parachute,4);
		};
		showNVGCargo[] =
		{
			false,
			false,
			true
		};
		cargoPreciseGetInOut[] = {false};
		cargoGetInAction[] = {GetInLow};
		cargoGetOutAction[] = {GetOutLow};
		cargoAction[] =
		{
			ChopperLight_C_L_static_H,
			ChopperLight_C_R_static_H,
			ChopperLight_CB_static_H,
			ChopperLight_CB_static_H,
			ChopperLight_CB_static_H,
			ChopperLight_CB_static_H
		};
		memoryPointsGetInCargo[] =
		{
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo L",
			"pos Cargo R"
		};
		memoryPointsGetInCargoDir[] =
		{
			"pos Cargo dir L",
			"pos Cargo dir R",
			"pos Cargo dir R",
			"pos Cargo dir L",
			"pos Cargo dir L",
			"pos Cargo dir R"
		};
		memoryPointsGetInCargoPrecise[] =
		{
			GetIn_Cargo,
			GetIn_Cargo2,
			GetIn_Cargo3,
			GetIn_Cargo4,
			GetIn_Cargo5,
			GetIn_Cargo6
		};
		class AnimationSources: AnimationSources
		{
			class AddBackseats: AddBackseats{};
			class AddBenches: AddBenches
			{
				initPhase = true;
			};
			class AddHoldingFrame: AddHoldingFrame{};
			class AddTread: AddTread
			{
				initPhase = true;
			};
			class AddCivilian_hide: AddCivilian_hide
			{
				initPhase = false;
			};
			class BenchL_Up_instant: BenchL_Up_instant{};
			class BenchR_Up: BenchR_Up{};
			class BenchR_Up_instant: BenchR_Up_instant{};
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			defaultCollective = 0.5;
		};
		transportSoldier = 2;
		hideWeaponsCargo = true;
		cargoProxyIndexes[] = {10,11};
		getInProxyOrder[] = {10,11,1,2,3,4};
		ejectDeadCargo = false;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = passenger_bench_1;
				gunnerCompartments = Compartment2;
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				gunnerName = $STR_A3_TURRETS_BENCH_R1;
				proxyIndex = 1;
				isPersonTurret = true;
				ejectDeadGunner = false;
				class TurnOut
				{
					limitsArrayTop[] =
					{
						{9.4394999,-94.855698},
						{12.5849,-34.384102},
						{14.0365,60.875801},
						{14.1021,95}
					};
					limitsArrayBottom[] =
					{
						{-32.2276,-94.901703},
						{-32.7616,-79.195801},
						{-45,-75.648804},
						{-44.965302,95}
					};
				};
				class TurnIn: TurnOut{};
				class dynamicViewLimits
				{
					CargoTurret_04[] = {-65,95};
				};
				playerPosition = 4;
				soundAttenuationTurret = "";
				disableSoundAttenuation = false;
				gunnerGetInAction = GetInHeli_Light_01bench;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = Compartment3;
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = $STR_A3_TURRETS_BENCH_L2;
				proxyIndex = 2;
				class dynamicViewLimits
				{
					CargoTurret_03[] = {-65,95};
				};
				class TurnOut
				{
					limitsArrayTop[] =
					{
						{10.6196,-94.8601},
						{11.1364,-69.195396},
						{14.0333,15.3744},
						{11.6789,94.968201}
					};
					limitsArrayBottom[] =
					{
						{-32.208099,-94.038101},
						{-32.368198,-78.541496},
						{-45,-72.854202},
						{-44.918598,94.886497}
					};
				};
				class TurnIn: TurnOut{};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments = Compartment3;
				gunnerName = $STR_A3_TURRETS_BENCH_L1;
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 3;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[] =
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[] =
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut{};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments = Compartment2;
				gunnerName = $STR_A3_TURRETS_BENCH_R2;
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 4;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[] =
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[] =
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut{};
			};
		};
		class EventHandlers: EventHandlers{};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
		};
	};
	class Heli_Light_01_dynamicLoadout_base_F;
	class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
	{
		textureList[] =
		{
			Blufor,1,
			Black,0
		};
	};
	class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
	{
		textureList[] =
		{
			Blufor,1,
			Black,0
		};
	};
	class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F
	{
		class TextureSources
		{
			class Ion
			{
				displayName = $STR_A3_TEXTURESOURCES_ION1;
				factions[] = {BLU_ION_F};
			};
			class Cougar
			{
				displayName = "Cougar";
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_01\Data\Skins\Heli_Light_01_ext_cougar_CO.paa"};
				factions[] = {CIV_F};
			};
		};
		textureList[] =
		{
			Red,1,
			Blue,1,
			Ion,1,
			BlueLine,1,
			Cougar,1,
			Digital,1,
			Elliptical,1,
			Furious,1,
			Graywatcher,1,
			Jeans,1,
			Light,1,
			Shadow,1,
			Sheriff,1,
			Speedy,1,
			Sunset,1,
			Vrana,1,
			Wasp,1,
			Wave,1
		};
		class AnimationSources: AnimationSources
		{
			class AddMusicUnit: AddMusicUnit{};
			class FLIR_HRot: FLIR_HRot{};
			class FLIR_VRot: FLIR_VRot{};
			class AddBenches: AddBenches
			{
				initPhase = false;
			};
			class AddHoldingFrame: AddHoldingFrame{};
			class BenchL_Up: BenchL_Up{};
			class BenchR_Up: BenchR_Up{};
			class BenchL_Up_instant: BenchL_Up_instant{};
			class BenchR_Up_instant: BenchR_Up_instant{};
			class AddDoors: AddDoors{};
			class AddBackseats: AddBackseats{};
			class AddTread: AddTread{};
			class DoorL_Front_Open{};
			class DoorR_Front_Open{};
			class DoorL_Back_Open{};
			class DoorR_Back_Open{};
		};
	};
	// Arma 3 Aegis
	class Heli_Light_01_recon_base_F: Heli_Light_01_unarmed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Light_01_recon_base_F0;
		icon = "\A3\Air_F\Heli_Light_01\Data\UI\Map_Heli_Light_01_CIV_CA.paa";
		accuracy = 1;
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"};
		transportSoldier = 2;
		hideWeaponsCargo = true;
		cargoProxyIndexes[] = {10,11};
		ejectDeadCargo = false;
		cost = 9000000;
		weapons[] = {Laserdesignator_pilotCamera};
		magazines[] = {Laserbatteries};
		class AnimationSources: AnimationSources
		{
			class FLIR_HRot: FLIR_HRot
			{
				initPhase = true;
			};
			class FLIR_VRot: FLIR_VRot
			{
				initPhase = true;
			};
			class AddBenches: AddBenches
			{
				initPhase = false;
			};
			class AddDoors: AddDoors
			{
				initPhase = false;
			};
			class AddBackseats: AddBackseats
			{
				initPhase = true;
			};
			class AddTread: AddTread
			{
				initPhase = true;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				isPersonTurret = false;
			};
		};
		showAllTargets = 4;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						aimDown = 0;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						aimDown = 0;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
		};
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			defaultCollective = 0.5;
		};
		memoryPointDriverOptics = light_dir;
		unitInfoType = RscOptics_CAS_Pilot;
		driverWeaponsInfoType = RscOptics_CAS_01_TGP;
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = (30 / 120);
					minFov = (30 / 120);
					maxFov = (30 / 120);
					directionStabilized = true;
					visionMode[] =
					{
						Normal,
						NVG,
						Ti
					};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] =
					{
						OpticsCHAbera2,
						OpticsBlur2
					};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = (15 / 120);
					minFov = (15 / 120);
					maxFov = (15 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (3.75 / 120);
					minFov = (3.75 / 120);
					maxFov = (3.75 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = true;
				showUAVViewInOptics = false;
				showSlingLoadManagerInOptics = false;
			};
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1.3;
			maxYRotSpeed = 1.3;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
	};
	#include "cfgBlufor.hpp"			// US
	#include "cfgIndep.hpp"             // AAF
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"      // US (Woodland)
	#include "cfgIon.hpp"               // ION
};