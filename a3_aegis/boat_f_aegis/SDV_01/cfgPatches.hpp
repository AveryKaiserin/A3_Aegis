class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_SDV_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (Pacific)
            B_T_SDV_01_F,

            // CSAT (Pacific)
            O_T_SDV_01_F,

            // Russia
            O_R_SDV_01_ard_F,
            O_R_SDV_01_F,

            // NATO (British)
            B_A_SDV_01_F,
            B_A_SDV_01_tna_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};