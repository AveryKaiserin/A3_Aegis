class CfgPatches
{
	class A3_HARM_Air_F_HARM_Plane_Transport_01
	{
		addonRootClass = A3_HARM_Air_F_HARM;
		requiredAddons[] = {A3_HARM_Air_F_HARM};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_Plane_Transport_01_infantry_F,
            O_Plane_Transport_01_vehicle_F,
            O_T_Plane_Transport_01_infantry_ghex_F,
            O_T_Plane_Transport_01_vehicle_ghex_F,

            /* From "cfgIndep.hpp" */
            I_Plane_Transport_01_infantry_F,
            I_Plane_Transport_01_vehicle_F
        };
		weapons[] = {/* Automated */};
	};
};
