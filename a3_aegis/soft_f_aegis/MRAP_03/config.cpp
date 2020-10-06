#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret{};
		};
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};
		class TextureSources
		{
			class Blufor
			{
				factions[] = {BLU_A_F};
			};
			class Olive
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[]=
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
				};
				factions[] =
				{
					BLU_A_tna_F,
					BLU_A_wdl_F
				};
			};
			class EAF
			{
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[]=
				{
                    "\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_EAF_CO.paa",
                    "\A3\Soft_F_Enoch\UGV_01\Data\Turret_EAF_CO.paa"
				};
				factions[] = {IND_E_F};
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class I_MRAP_03_F;
    class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F{};
    class I_MRAP_03_gmg_F: MRAP_03_gmg_base_F{};
    // Arma 3 Aegis
	#include "cfgEAF.hpp"				// LDF
	#include "cfgBlufor_Aegis.hpp"      // BAF
};