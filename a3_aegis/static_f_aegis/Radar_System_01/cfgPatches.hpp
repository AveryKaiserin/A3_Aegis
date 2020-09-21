class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Radar_System_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Sams_Radar_System_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (Pacific)
            B_T_Radar_System_01_F,

            // NATO (Woodland)
            B_W_Radar_System_01_F,

            // NATO (British)
            B_A_Radar_System_01_F,
            B_A_Radar_System_01_tna_F,
            B_A_Radar_System_01_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};