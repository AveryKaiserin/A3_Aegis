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
					BLU_W_F,
					IND_E_F
				};
			};
		};
		textureList[] =
		{
			Desert,1,
			Olive,0
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};