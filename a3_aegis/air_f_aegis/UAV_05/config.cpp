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
						hardpoints[] +=
                        {
                            B_AMRAAM_D_INT,
                            B_AGM_154
                        };
					};
					class pylon2;
				};
			};
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREY0;
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class DarkGreyCamo
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREYCAMO0;
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
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
};