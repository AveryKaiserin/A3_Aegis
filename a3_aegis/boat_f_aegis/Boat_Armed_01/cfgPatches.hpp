class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Armed_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Boat_F_Aegis,
			A3_Boat_F_Beta_Boat_Armed_01,
			A3_Boat_F_Boat_Armed_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Russia
            O_R_Boat_Armed_01_hmg_ard_F,
            O_R_Boat_Armed_01_hmg_F,

            // NATO (British)
            B_A_Boat_Armed_01_hmg_F,
            B_A_Boat_Armed_01_hmg_tna_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};