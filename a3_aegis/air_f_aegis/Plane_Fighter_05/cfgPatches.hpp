class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_05
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO
            B_Ejection_Seat_Plane_Fighter_05_F,
            B_Plane_Fighter_05_F,
            B_Plane_Fighter_05_Stealth_F,

            // NATO (Pacific)
            B_T_Ejection_Seat_Plane_Fighter_05_F,
            B_T_Plane_Fighter_05_F,
            B_T_Plane_Fighter_05_Stealth_F,

            // NATO (Woodland)
            B_W_Ejection_Seat_Plane_Fighter_05_F,
            B_W_Plane_Fighter_05_F,
            B_W_Plane_Fighter_05_Stealth_F,

            // NATO (British)
            B_A_Ejection_Seat_Plane_Fighter_05_F,
            B_A_Ejection_Seat_Plane_Fighter_05_tna_F,
            B_A_Ejection_Seat_Plane_Fighter_05_wdl_F,
            B_A_Plane_Fighter_05_F,
            B_A_Plane_Fighter_05_tna_F,
            B_A_Plane_Fighter_05_wdl_F,
            B_A_Plane_Fighter_05_Stealth_F,
            B_A_Plane_Fighter_05_Stealth_tna_F,
            B_A_Plane_Fighter_05_Stealth_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};