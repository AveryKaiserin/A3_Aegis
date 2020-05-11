#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class StaticMGWeapon;
	class Radar_System_01_base_F: StaticMGWeapon
	{
		class TextureSources
		{
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
			class LDF
			{
				displayName = $STR_A3_TEXTURESOURCES_LDF0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {IND_E_F};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_01_EAF_CO.paa",
					"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_02_EAF_CO.paa"
				};
			};
		};
		textureList[] =
		{
			Desert,1,
			Olive,0,
			LDF,0
		};
	};
	// Arma 3 Enoch
	class I_E_Radar_System_01_F: Radar_System_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_01_EAF_CO.paa",
			"\A3_Aegis\Static_F_Aegis\Radar_System_01\Data\Radar_system_01_mat_02_EAF_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};