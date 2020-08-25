class CfgPatches
{
	class A3_Opf_Static_F_Opf_HMG_02
	{
		addonRootClass = A3_Opf_Static_F_Opf;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Opf_Static_F_Opf,
			A3_Static_F_Oldman_HMG_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            O_P_HMG_02_F,
            O_P_HMG_02_high_F,

            // Separatists
            O_E_HMG_02_F,
            O_E_HMG_02_high_F,

            // Insurgents
            I_T_HMG_02_F,
            I_T_HMG_02_high_F,

            // Patriots
            I_M_HMG_02_F,
            I_M_HMG_02_high_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};