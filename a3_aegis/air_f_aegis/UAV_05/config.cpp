#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane;
	class UAV: Plane
	{
		class Components;
	};
	class UAV_05_Base_F: UAV
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylon1
					{
						hardpoints[] += {B_AMRAAM_D_INT};
					};
					class pylon2;
				};
			};
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName = "Dark Grey";
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class DarkGreyCamo
			{
				displayName = "Dark Grey Camo";
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	class B_UAV_05_F;
	// Arma 3
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};