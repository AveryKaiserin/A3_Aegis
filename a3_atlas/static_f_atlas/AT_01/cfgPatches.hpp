class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_AT_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Static_AT_F,

            // Legion
            B_L_Static_AT_F,

            // NATO (German)
            B_E_Static_AT_F,

            // CSAT (Takistani)
            O_C_Static_AT_F,

            // ADF
            B_O_AT_01_weapon_F,
            B_O_Static_AT_F,

            // CDF
            I_W_AT_01_weapon_F,
            I_W_Static_AT_F,

            // IDF
            I_I_AT_01_weapon_F,
            I_I_Static_AT_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};