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
                // NATO
				{B_Boat_Transport_02_F,1},

                // Civilians
				{C_Boat_Civil_02_F,0.5},

                // AAF
				{I_Boat_Transport_02_F,1},

                // CSAT
				{O_Boat_Transport_02_F,1},

                // FIA
				{B_G_Boat_Transport_02_F,1},
				{O_G_Boat_Transport_02_F,1},
				{I_G_Boat_Transport_02_F,1},

                // NATO (Pacific)
				{B_T_Boat_Transport_02_F,1},
				{B_T_SDV_01_F,0},

                // CSAT (Pacific)
				{O_T_Boat_Transport_02_F,1},
				{O_T_SDV_01_F,0},

                // Russia
				{O_R_Boat_Armed_01_hmg_F,0.3},
				{O_R_Boat_Armed_01_hmg_ard_F,0.3},
				{O_R_Boat_Transport_01_F,0.3},
				{O_R_Boat_Transport_01_ard_F,0.3},
				{O_R_Boat_Transport_02_F,1},
				{O_R_Boat_Transport_02_ard_F,1},
				{O_R_Lifeboat,0.1},
				{O_R_Lifeboat_ard_F,0.1},
				{O_R_SDV_01_F,0},
				{O_R_SDV_01_ard_F,0},
                
                // NATO (British)
				{B_A_Boat_Armed_01_hmg_F,0.3},
				{B_A_Boat_Armed_01_hmg_tna_F,0.3},
				{B_A_Boat_Transport_01_F,0.1},
				{B_A_Boat_Transport_01_tna_F,0.1},
				{B_A_Lifeboat,0.1},
				{B_A_Lifeboat_tna_F,0.1},
				{B_A_Boat_Transport_02_F,1},
				{B_A_Boat_Transport_02_tna_F,1},
				{B_A_SDV_01_F,0},
				{B_A_SDV_01_tna_F,0},

                // USMC
				{B_USMC_Boat_Transport_01_F,0.1},

                // Police
				{I_P_Boat_Civil_01_police_F,0.55}
			};
		};
	};
};