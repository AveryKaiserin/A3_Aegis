#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
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
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
			class RightDoorGun: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
		class TextureSources
		{
			class Green
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Black
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext02_grey_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F{};
	class B_Heli_Transport_01_camo_F: B_Heli_Transport_01_F
	{
		scope = protected;
		scopeCurator = private;
	};
	// Arma 3 Apex
	class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F
	{
		displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
		typicalCargo[] = {B_CTRG_Soldier_F};
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			delete _xx_30Rnd_556x45_Stanag;
			mag_xx(30Rnd_556x45_Stanag_red,4);
		};
	};
	class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F
	{
		displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
    	faction = BLU_CTRG_tna_F;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class MainTurret: MainTurret
			{
				gunnerType = B_T_Helicrew_F;
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType = B_T_Helicrew_F;
			};
		};
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			delete _xx_30Rnd_556x45_Stanag;
			mag_xx(30Rnd_556x45_Stanag_red,4);
		};
	};
	// Arma 3 Aegis
	class Heli_Transport_01_medevac_base_F: Heli_Transport_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Transport_01_medevac_base_F0;
		cost = 1400000;
		threat[] = {0,0,0};
		attendant = true;
		forceInGarage = true;
		class TransportBackpacks
		{
			bag_xx(B_Parachute,8);
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			item_xx(FirstAidKit,8);
			item_xx(ToolKit,1);
			item_xx(Medikit,2);
			item_xx(ItemGPS,1);
		};
		class TextureSources{};
	};
	#include "cfgBlufor.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};