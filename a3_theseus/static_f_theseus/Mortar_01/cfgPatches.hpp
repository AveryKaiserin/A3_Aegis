class CfgPatches
{
	class A3_Theseus_Static_F_Theseus_Mortar_01
	{
		addonRootClass = A3_Theseus_Static_F_Theseus;
		requiredAddons[] = {A3_Theseus_Static_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_Mortar_01_F
        };
		weapons[] = {/* Automated */};
	};
};