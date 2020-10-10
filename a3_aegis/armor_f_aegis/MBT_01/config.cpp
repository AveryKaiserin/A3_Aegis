#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
	};
	class MBT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
                    {
						weapons[] =
                        {
                            SmokeLauncher,
                            Laserdesignator_mounted
                        };
						magazines[] =
                        {
                            SmokeLauncherMag,
                            Laserbatteries
                        };
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = TransportFeedDisplayComponent;
										source = Missile;
									};
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            4000,
                                            2000,
                                            1000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = SensorDisplay;
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = TransportFeedDisplayComponent;
										source = Missile;
									};
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            4000,
                                            2000,
                                            1000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
						};
                    };
				};
				magazines[] =
				{
					24Rnd_120mm_APFSDS_shells_Tracer_Red,
					12Rnd_120mm_HE_shells_Tracer_Red,
					12Rnd_120mm_HEAT_MP_T_Red,
					mag_20(200Rnd_762x51_Belt_Red),
					4Rnd_120mm_LG_cannon_missiles
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = TransportFeedDisplayComponent;
								source = Missile;
							};
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    4000,
                                    2000,
                                    1000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = SensorDisplay;
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = TransportFeedDisplayComponent;
								source = Missile;
							};
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    4000,
                                    2000,
                                    1000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
				};
			};
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_mcamo,2);
		};
        radarType = VehicleRadar;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						animDirection = mainTurret;
					};
				};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F{};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		animationList[] =
		{
			showCamonetCannon,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showCamonetTurret,0,
			showCamonetHull,0,
			showBags,0.67
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] =
						{
							64Rnd_40mm_G_belt,
							mag_2(200Rnd_127x99_mag_Tracer_Red),
							SmokeLauncherMag
						};
					};
				};
			};
		};
		animationList[] =
		{
			showCamonetCannon,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showCamonetTurret,0,
			showCamonetHull,0,
			showCanisters,0.33,
			showAmmobox,0.17
		};
	};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F{};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_CO.paa",
			"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	};
	class MBT_01_mlrs_base_F: MBT_01_base_F{};
	class B_MBT_01_mlrs_F;
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] =
                        {
                            HMG_127_MBT,
                            SmokeLauncher,
                            Laserdesignator_mounted
                        };
						magazines[] =
						{
							mag_2(200Rnd_127x99_mag_Tracer_Red),
							SmokeLauncherMag,
                            Laserbatteries
						};
					};
				};
				magazines[] =
				{
					24Rnd_120mm_APFSDS_shells_Tracer_Red,
					12Rnd_120mm_HE_shells_Tracer_Red,
					12Rnd_120mm_HEAT_MP_T_Red,
					mag_20(200Rnd_762x51_Belt_Red),
					4Rnd_120mm_LG_cannon_missiles
				};
			};
		};
	};
	// Arma 3 Apex
	class B_T_MBT_01_arty_F: B_MBT_01_arty_F
	{
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F
	{
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F
	{
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	// Arma 3 Aegis
	/*
	class MBT_01_mlrs_dynamicLoadout_base_F: MBT_01_mlrs_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\UI\MBT_01_MLRS_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						maxweight = 15000;
						hardpoints[] = {UNI_MLRS_PYLON};
						attachment = "";
						bay = -1;
						priority = 1;
						UIposition[] =
						{
							0.32,
							0.28
						};
						turret[] = {MainTurret};
						mirroredMissilePos = false;
					};
				};
			};
		};
	};
	*/
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
};