class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_CAS_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_EPC_Plane_CAS_01
		};
		requiredVersion = 0.1;
		units[] = 
        {
            // US (Pacific)
            B_T_Ejection_Seat_Plane_CAS_01_F,
            B_T_Plane_CAS_01_dynamicLoadout_F,

            // US (Woodland)
            B_W_Ejection_Seat_Plane_CAS_01_F,
            B_W_Plane_CAS_01_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};