class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_HARM_Armor_F_HARM
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 HARM - Armored Land Vehicles";
		url = linkHARM;
		requiredAddons[] = 
		{
			A3_HARM_Data_F_HARM,
			A3_Aegis_Armor_F_Aegis
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};