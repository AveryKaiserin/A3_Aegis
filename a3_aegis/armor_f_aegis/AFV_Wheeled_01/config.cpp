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
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
    // Arma 3 Tanks
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		icon = "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\UI\Map_AFV_Wheeled_01_CA.paa";
		editorSubcategory = EdSubcat_TankDestroyers;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
						};
                    };
                };
				magazines[] =
				{
					12Rnd_120mm_APFSDS_shells_Tracer_Red,
					8Rnd_120mm_HE_shells_Tracer_Red,
					8Rnd_120mm_HEAT_MP_T_Red,
					mag_5(200Rnd_338_Mag),
					4Rnd_120mm_LG_cannon_missiles
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
				};
			};
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_mcamo,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TextureSources
		{
			class Sand
			{
				factions[] =
				{
					BLU_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
    {
		icon = "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\UI\Map_AFV_Wheeled_01_up_CA.paa";
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
                            HMG_127_AFV,
                            SmokeLauncher,
                            Laserdesignator_mounted
                        };
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
						};
                    };
                };
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
				};
			};
		};
    };
	class B_T_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MXC_khk_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	class B_T_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MXC_khk_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_tna_F,2);
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
};