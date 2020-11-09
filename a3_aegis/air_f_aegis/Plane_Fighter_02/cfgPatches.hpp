class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Jets_Plane_Fighter_02
		};
		requiredVersion = 0.1;
		units[] = 
        {
            // China
            O_T_Ejection_Seat_Plane_Fighter_02_F,
            O_T_Plane_Fighter_02_ghex_F,
            O_T_Plane_Fighter_02_Stealth_ghex_F,

            // Russia
            O_R_Ejection_Seat_Plane_Fighter_02_ard_F,
            O_R_Ejection_Seat_Plane_Fighter_02_F,
            O_R_Plane_Fighter_02_ard_F,
            O_R_Plane_Fighter_02_F,
            O_R_Plane_Fighter_02_Stealth_ard_F,
            O_R_Plane_Fighter_02_Stealth_F
        };
		weapons[] = {/* Automated */};
	};
};