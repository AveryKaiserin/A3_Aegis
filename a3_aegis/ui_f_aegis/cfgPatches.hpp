class CfgPatches
{
    /* URLs definitions */
    #include "P:\A3_Aegis\urls.hpp"

	class A3_Aegis_UI_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - User Interface";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_UI_F,
			A3_UI_F_Curator
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};