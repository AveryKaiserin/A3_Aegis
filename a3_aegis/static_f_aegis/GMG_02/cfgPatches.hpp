class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_GMG_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] = {A3_Aegis_Static_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_GMG_02_F,
            B_A_GMG_02_high_F,
            B_A_GMG_02_tna_F,
            B_A_GMG_02_high_tna_F,
            B_A_GMG_02_wdl_F,
            B_A_GMG_02_high_wdl_F,

            /* From "cfgIndep.hpp" */
            I_GMG_02_F,
            I_GMG_02_high_F

            /* From "cfgEAF.hpp" */
            I_E_GMG_02_F,
            I_E_GMG_02_high_F
        };
		weapons[] = {/* Automated */};
	};
};