class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_HARM_Language_F_HARM
	{
		author = $STR_A3_A_Heliotrope;
		name = "HARM - Texts and Translations";
		//url = linkHARM;
		requiredAddons[] =
        {
            A3_HARM_Data_F_HARM,
            A3_Language_F_Beta,
            A3_Language_F_Enoch
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};