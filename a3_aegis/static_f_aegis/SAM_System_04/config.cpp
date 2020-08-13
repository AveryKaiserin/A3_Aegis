#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class StaticMGWeapon;
	class SAM_System_04_base_F: StaticMGWeapon
	{
		class TextureSources
		{
			class AridHex
			{
				factions[] = {OPF_F};
			};
			class JungleHex: AridHex
			{
				factions[] = {OPF_T_F};
			};
			class Green: AridHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_01_RUgrn_CO.paa",
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_02_RUgrn_CO.paa"
				};
			};
			class Taiga: AridHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TAIGA0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {OPF_R_F};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_01_RUcamo_CO.paa",
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_02_RUcamo_CO.paa"
				};
			};
			class Arid: AridHex
			{
				displayName = $STR_A3_TEXTURESOURCES_ARID0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {OPF_R_ard_F};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_01_RUkhk_CO.paa",
					"\A3_Aegis\Static_F_Aegis\SAM_System_04\Data\Sam_system_04_mat_02_RUkhk_CO.paa"
				};
			};
		};
		textureList[] =
		{
			AridHex,0,
			JungleHex,0,
			Green,0,
			Taiga,0,
			Arid,0
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
};