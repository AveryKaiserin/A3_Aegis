class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_SAM_System_03
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (German)
            B_E_SAM_System_03_F,

            // ADF
            B_O_SAM_System_03_F,

            // IDF
            I_I_SAM_System_03_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};