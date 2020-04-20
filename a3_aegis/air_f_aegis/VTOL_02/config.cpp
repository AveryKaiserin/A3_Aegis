#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		class TextureSources
		{
			class Hex
			{
				factions[] = {OPF_F};
			};
			class GreenHex
			{
				factions[] = {OPF_T_F};
			};
		};
	};
	class VTOL_02_infantry_dynamicLoadout_base_F;
	class O_T_VTOL_02_infantry_dynamicLoadout_F: VTOL_02_infantry_dynamicLoadout_base_F
	{
		textureList[] =
		{
			GreenHex,1,
			Grey,0
		};
	};
	class VTOL_02_vehicle_dynamicLoadout_base_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F: VTOL_02_vehicle_dynamicLoadout_base_F
	{
		textureList[] =
		{
			GreenHex,1,
			Grey,0
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor.hpp"
};