class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Plane_Transport_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            B_L_Plane_Transport_01_infantry_F,
            B_L_Plane_Transport_01_vehicle_F,

            // NATO (German)
            B_E_Plane_Transport_01_infantry_F,
            B_E_Plane_Transport_01_vehicle_F,

            // ADF
            B_O_Plane_Transport_01_infantry_F,
            B_O_Plane_Transport_01_vehicle_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};