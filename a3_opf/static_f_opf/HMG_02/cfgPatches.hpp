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
            Opf_O_P_HMG_02_F,
            Opf_O_P_HMG_02_high_F,

            // Separatists
            Opf_O_S_HMG_02_F,
            Opf_O_S_HMG_02_high_F,

            // Insurgents
            Opf_I_I_HMG_02_F,
            Opf_I_I_HMG_02_high_F,

            // Patriots
            Opf_I_P_HMG_02_F,
            Opf_I_P_HMG_02_high_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};