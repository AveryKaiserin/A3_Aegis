class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_HMG_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_HMG_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (Pacific)
            B_HMG_02_high_Weapon_grn_F,
            B_HMG_02_support_grn_F,
            B_HMG_02_support_high_grn_F,
            B_HMG_02_Weapon_grn_F,
            B_T_HMG_02_F,
            B_T_HMG_02_high_F,

            // CSAT (African)
            O_A_HMG_02_F,
            O_A_HMG_02_high_F,

            // NATO (Woodland)
            B_W_HMG_02_F,
            B_W_HMG_02_high_F,

            // NATO (British)
            B_A_HMG_02_F,
            B_A_HMG_02_high_F,
            B_A_HMG_02_high_tna_F,
            B_A_HMG_02_high_wdl_F,
            B_A_HMG_02_tna_F,
            B_A_HMG_02_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};