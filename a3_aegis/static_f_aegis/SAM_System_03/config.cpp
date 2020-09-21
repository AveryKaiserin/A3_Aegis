#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class StaticMGWeapon;
	class SAM_System_03_base_F: StaticMGWeapon
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
					"\A3_Aegis\Static_F_Aegis\SAM_System_03\Data\Sam_system_03_mat_01_EAF_CO.paa",
					"\A3_Aegis\Static_F_Aegis\SAM_System_03\Data\Sam_system_03_mat_02_EAF_CO.paa"
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
	class I_E_SAM_System_03_F: SAM_System_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Static_F_Aegis\SAM_System_03\Data\Sam_system_03_mat_01_EAF_CO.paa",
			"\A3_Aegis\Static_F_Aegis\SAM_System_03\Data\Sam_system_03_mat_02_EAF_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"		// NATO (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// NATO (Woodland)
	#include "cfgBlufor_Aegis.hpp"		// NATO (British)
};