#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class Helicopter_Base_F;
	class UAV_03_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_1_CO.paa",
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_2_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_03\Data\UAV_03_1_black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_03\Data\UAV_03_2_black_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		textureList[] =
		{
			Green,1,
			Black,0
		};
	};
	class B_T_UAV_03_dynamicLoadout_F;
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgBlufor_Enoch.hpp"
};