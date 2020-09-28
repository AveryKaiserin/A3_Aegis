class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Transport_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // AAF
            I_Plane_Transport_01_infantry_F,
            I_Plane_Transport_01_vehicle_F,

            // Iran
            O_Plane_Transport_01_infantry_F,
            O_Plane_Transport_01_vehicle_F,

            // China
            O_T_Plane_Transport_01_infantry_ghex_F,
            O_T_Plane_Transport_01_vehicle_ghex_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};
