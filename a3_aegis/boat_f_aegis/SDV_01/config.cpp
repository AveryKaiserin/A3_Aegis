#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Boat_F;
	class SDV_01_base_F: Boat_F
	{
		class TextureSources
		{
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_CO.paa"};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					BLU_A_tna_F,
					OPF_R_F,
					OPF_R_alt_F
				};
			};
			class Hex
			{
				displayName = $STR_A3_TEXTURESOURCES_OPFOR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_OPFOR_CO.paa"};
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class Digital
			{
				displayName = $STR_A3_TEXTURESOURCES_DIGITAL0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_INDP_CO.paa"};
				factions[] = {IND_F};
			};
		};
	};
	class B_SDV_01_F: SDV_01_base_F
	{
		textureList[] = {Black,1};
	};
	class O_SDV_01_F: SDV_01_base_F
	{
		textureList[] = {Hex,1};
	};
	class I_SDV_01_F: SDV_01_base_F
	{
		textureList[] = {Digital,1};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};