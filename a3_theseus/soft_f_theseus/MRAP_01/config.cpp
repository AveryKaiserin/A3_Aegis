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
	class MRAP_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class TextureSources
		{
			class Indep
			{
				DisplayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_INDP_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_INDP_CO.paa",
					"\A3\Data_F\Vehicles\Turret_INDP_CO.paa"
				};
				factions[] = {IND_F};
			};
		};
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
		};
	};
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	// Arma 3 Theseus
	#include "cfgNAAF.hpp"
};