class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_AA_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Static_AA_F,

            // Legion
            B_L_Static_AA_F,

            // NATO (German)
            B_E_Static_AA_F,

            // CSAT (Caspian)
            O_C_Static_AA_F,

            // ADF
            B_O_AA_01_weapon_F,
            B_O_Static_AA_F,

            // CDF
            I_W_AA_01_weapon_F,
            I_W_Static_AA_F,

            // IDF
            I_I_AA_01_weapon_F,
            I_I_Static_AA_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};