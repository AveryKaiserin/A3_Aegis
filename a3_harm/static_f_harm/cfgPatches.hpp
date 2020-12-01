class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_HARM_Static_F_HARM
	{
		author = $STR_A3_A_Heliotrope;
		name = "Arma 3 HARM - Turrets";
		url = linkHARM;
		requiredAddons[] =
		{
			A3_HARM_Data_F_HARM,
			A3_Aegis_Data_F_Aegis,
			A3_Static_F,
            A3_Static_F_Destroyer_Boat_Rack_01
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};