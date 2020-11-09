class CfgPatches
{
    /* URLs definitions */
    #include "P:\A3_Aegis\urls.hpp"

	class A3_Aegis_Language_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Texts and Translations";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            A3_Language_F_Beta,
            A3_Language_F_Enoch
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};