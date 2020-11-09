class CfgPatches
{
    /* URLs definitions */
    #include "P:\A3_Aegis\urls.hpp"

	class A3_Aegis_Static_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Turrets";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_Static_F
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};