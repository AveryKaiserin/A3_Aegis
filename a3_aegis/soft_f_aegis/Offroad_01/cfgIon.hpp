class B_ION_Offroad_01_F: Offroad_01_civil_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
	};
	animationList[] =
	{
		HideBumper1,0,
		HideBumper2,0,
		HideConstruction,0,
		HideDoor3,0.33,
		HideBackpacks,0.83
	};
	transportSoldier = 1;
	cargoProxyIndexes[] = {1};
	getInProxyOrder[] = {1,2,3,4,5};
	class CargoTurret;
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret
		{
            gunnerAction = passenger_flatground_3;
            memoryPointsGetInGunner = "pos cargo RR";
            memoryPointsGetInGunnerDir = "pos cargo RR dir";
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_R2;
            gunnerCompartments = Compartment2;
            proxyIndex = 2;
            isPersonTurret = true;
            canHideGunner = false;
            allowLauncherIn = false;
            allowLauncherOut = false;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {33.820801,-93.961601},
                    {40.890598,66.570503}
                };
                limitsArrayBottom[] =
                {
                    {-9.4643002,-94.575302},
                    {-8.3683004,-67.686699},
                    {-9.7173004,43.637199},
                    {-10.1082,78.916603}
                };
            };
            class dynamicViewLimits
            {
                CargoTurret_02[] = {-65,75};
            };
		};
		class CargoTurret_02: CargoTurret_01
		{
            gunnerAction = passenger_flatground_2;
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_L2;
            memoryPointsGetInGunner = "pos cargo LR";
            memoryPointsGetInGunnerDir = "pos cargo LR dir";
            proxyIndex = 3;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {37.1488,-71.900299},
                    {36.4967,92.275703}
                };
                limitsArrayBottom[] =
                {
                    {-22.183201,-70.0989},
                    {-13.9068,-22.810699},
                    {-7.1236,75.684898},
                    {-7.8564,102.5826}
                };
            };
            class dynamicViewLimits
            {
                CargoTurret_01[] = {-75,65};
            };
		};
		class CargoTurret_03: CargoTurret_01
		{
            gunnerAction = passenger_flatground_4_vehicle_passenger_stand_1;
            gunnerInAction = vehicle_passenger_stand_1_passenger_flatground_4;
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_R1;
            memoryPointsGetInGunner = "pos cargo RF";
            memoryPointsGetInGunnerDir = "pos cargo RF dir";
            proxyIndex = 4;
            forceHideGunner = false;
            canHideGunner = true;
            isPersonTurret = 2;
            LODTurnedIn = 1200;
            LODTurnedOut = -1;
            outGunnerMayFire = true;
            inGunnerMayFire = true;
            animationSourceHatch = gunner_rf_turn;
            allowLauncherIn = false;
            allowLauncherOut = true;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {44.089901,0.4614}
                };
                limitsArrayBottom[] =
                {
                    {-5.6160998,-103.2468},
                    {-6.3358998,-86.666603},
                    {-4.5173001,-52.222401},
                    {-2.1726999,-26.9412},
                    {-2.7195001,17.171101},
                    {-8.6473999,52.254501},
                    {-9.5586996,116.7031}
                };
                turnOffset = -180;
            };
            class TurnOut: TurnIn
            {
                limitsArrayTop[] =
                {
                    {38.5373,-12.3438}
                };
                limitsArrayBottom[] =
                {
                    {-55.813202,-78.700996},
                    {-55.695,-42.974899},
                    {-20.534901,-8.1766005},
                    {-18.5114,7.3281999},
                    {-19.9175,18.901199},
                    {-20.0625,26.805099},
                    {-19.9485,37.776798},
                    {-34.081501,67.225403},
                    {-48.6922,80.034798},
                    {-47.633099,90.4505}
                };
            };
            class dynamicViewLimits
            {
                CargoTurret_01[] = {5,75};
                CargoTurret_02[] = {-15,75};
                CargoTurret_04[] = {-75,75};
            };
		};
		class CargoTurret_04: CargoTurret_03
		{
            gunnerAction = passenger_flatground_4_vehicle_passenger_stand_1;
            gunnerInAction = vehicle_passenger_stand_1_passenger_flatground_4;
            gunnerName = $STR_A3_TURRETS_CARGOTURRET_L1;
            memoryPointsGetInGunner = "pos cargo LF";
            memoryPointsGetInGunnerDir = "pos cargo LF dir";
            proxyIndex = 5;
            animationSourceHatch = gunner_lf_turn;
            allowLauncherIn = false;
            allowLauncherOut = true;
            class TurnIn
            {
                limitsArrayTop[] =
                {
                    {32.724899,-3.3246}
                };
                limitsArrayBottom[] =
                {
                    {-13.8937,-116.0915},
                    {-15.9318,-73.923203},
                    {-7.7740998,-33.610401},
                    {-2.2081001,-11.6789},
                    {-2.175,33.696899},
                    {-4.7947998,64.996803},
                    {-6.1245999,108.4244}
                };
                turnOffset = -180;
            };
            class TurnOut: TurnIn
            {
                limitsArrayTop[] =
                {
                    {60.203899,-100.4401}
                };
                limitsArrayBottom[] =
                {
                    {-39.821899,-73.344398},
                    {-35.159698,-60.962002},
                    {-28.0802,-54.4944},
                    {-18.1518,-30.9259},
                    {-20.7152,12.1939},
                    {-36.766602,33.6105},
                    {-39.774799,75.873199}
                };
            };
            class dynamicViewLimits
            {
                CargoTurret_01[] = {-75,15};
                CargoTurret_02[] = {-75,-5};
                CargoTurret_03[] = {-75,75};
            };
		};
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class B_ION_Offroad_01_covered_F: Offroad_01_military_covered_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	accuracy = 1.25;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	animationList[] =
	{
		HideRoofRack,1,
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
	};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_cover_blk_CO.paa"
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
};
class B_ION_Offroad_01_comms_F: Offroad_01_military_comms_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Offroad_01_comms_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Soldier_F;
	typicalCargo[] = {B_ION_Soldier_F};
	accuracy = 1.25;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,8);
		mag_xx(HandGrenade,4);
		mag_xx(SmokeShell,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	animationList[] =
    {
        HideCover,0,
        HideDoor3,0,
        HideBumper1,1,
        HideBumper2,0
    };
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
		"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_cover_blk_CO.paa"
	};
};