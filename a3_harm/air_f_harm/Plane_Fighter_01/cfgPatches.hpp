class CfgPatches
{
	class A3_HARM_Air_F_HARM_Plane_Fighter_01
	{
		addonRootClass = A3_HARM_Air_F_HARM;
		requiredAddons[] = {A3_HARM_Air_F_HARM, A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_Plane_Fighter_01_F,
            B_T_Plane_Fighter_01_Stealth_F,
            B_T_Ejection_Seat_Plane_Fighter_01_F,
            B_W_Plane_Fighter_01_F,
            B_W_Plane_Fighter_01_Stealth_F,
            B_W_Ejection_Seat_Plane_Fighter_01_F
        };
		weapons[] = {/* Automated */};
	};
};