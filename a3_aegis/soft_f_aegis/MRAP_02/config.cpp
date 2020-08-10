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
	class MRAP_02_base_F: Car_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_RUgrn_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Taiga
			{
				displayName = $STR_A3_TEXTURESOURCES_TAIGA0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_RUcamo_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_RUcamo_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUcamo_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
		};
	};
	class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	// Arma 3 Apex
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F
	{
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F
	{
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
};