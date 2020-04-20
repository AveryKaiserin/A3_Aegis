#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class UAV_01_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Opfor
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class Blufor
			{
				factions[]=
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F,
					BLU_A_F
				};
			};
			class ION
			{
				displayName = $STR_A3_TEXTURESOURCES_ION1;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_ION_CO.paa"};
				factions[] = {BLU_ION_F};
			};
			class Rus
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RUS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_RUS_CO.paa"};
				factions[] = {OPF_R_F};
			};
		};
	};
	class B_UAV_01_F;
	class O_UAV_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgIon.hpp"
};