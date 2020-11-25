class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Theseus_Static_F_Theseus
	{
		author = $STR_A3_A_Heliotrope;
		name = "Arma 3 Theseus - Turrets";
		url = linkTheseus;
		requiredAddons[] =
		{
			A3_Theseus_Data_F_Theseus,
			A3_Static_F,
            A3_Static_F_Destroyer_Boat_Rack_01
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};