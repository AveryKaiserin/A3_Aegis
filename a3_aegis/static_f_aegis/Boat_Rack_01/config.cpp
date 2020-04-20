#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class Items_base_F;
	class Land_Destroyer_01_Boat_Rack_01_Base_F: Items_base_F
	{
		class BoatRecoverySystem
		{
			supportedVehicleOffsetsZ[] +=
			{
				{C_Boat_Civil_02_F,0.5},
				{I_G_Boat_Civil_01_police_F,0.55},
				{B_G_Boat_Transport_02_F,1},
				{B_Boat_Transport_02,1},
				{B_T_Boat_Transport_02,1},
				{B_T_SDV_01_F,0},
				{B_A_Boat_Armed_01_hmg_F,0.3},
				{B_A_Boat_Transport_01_F,0.1},
				{B_A_Lifeboat,0.1},
				{B_A_Boat_Transport_02,1},
				{B_A_SDV_01_F,0},
				{I_G_Boat_Civil_01_police_F,0.55},
				{I_G_Boat_Transport_02_F,1},
				{I_Boat_Transport_02_F,1},
				{O_G_Boat_Civil_01_police_F,0.55},
				{O_G_Boat_Transport_02_F,1},
				{O_Boat_Transport_02,1},
				{O_T_Boat_Transport_02,1},
				{O_T_SDV_01_F,0},
				{O_R_Boat_Armed_01_hmg_F,0.3},
				{O_R_Boat_Transport_01,0.3},
				{O_R_Boat_Transport_02,1},
				{O_R_Lifeboat ,0.1},
				{O_R_SDV_01_F,0}
			};
		};
	};
};