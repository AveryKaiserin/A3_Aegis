#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
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
	};
	class MBT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				magazines[] =
				{
					24Rnd_120mm_APFSDS_shells_Tracer_Red,
					12Rnd_120mm_HE_shells_Tracer_Red,
					12Rnd_120mm_HEAT_MP_T_Red,
					mag_20(200Rnd_762x51_Belt_Red),
					4Rnd_120mm_cannon_missiles
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
						magazines[] =
						{
							mag_2(200Rnd_127x99_mag_Tracer_Red),
							SmokeLauncherMag
						};
					};
				};
				magazines[] =
				{
					24Rnd_120mm_APFSDS_shells_Tracer_Red,
					12Rnd_120mm_HE_shells_Tracer_Red,
					12Rnd_120mm_HEAT_MP_T_Red,
					mag_20(200Rnd_762x51_Belt_Red),
					4Rnd_120mm_cannon_missiles
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
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
};