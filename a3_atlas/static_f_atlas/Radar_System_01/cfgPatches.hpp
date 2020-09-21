class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_Radar_System_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (German)
            B_E_Radar_System_01_F,

            // ADF
            B_O_Radar_System_01_F,

            // IDF
            I_I_Radar_System_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};