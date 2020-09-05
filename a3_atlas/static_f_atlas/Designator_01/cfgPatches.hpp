class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_Designator_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (German)
            B_E_Static_Designator_01_F,

            // ADF
            B_O_Static_Designator_01_F,
            B_O_Static_Designator_01_weapon_F,

            // IDF
            I_I_Static_Designator_01_F,
            I_I_Static_Designator_01_weapon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};