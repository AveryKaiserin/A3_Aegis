class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Plane_Transport_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Germany
            Atlas_B_G_Plane_Transport_01_infantry_F,
            Atlas_B_G_Plane_Transport_01_vehicle_F,

            // ADF
            Atlas_B_A_Plane_Transport_01_infantry_F,
            Atlas_B_A_Plane_Transport_01_vehicle_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};