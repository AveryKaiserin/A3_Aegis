class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Quadbike_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Quadbike_01,
			A3_Soft_F_Enoch_Quadbike_01,
			A3_Soft_F_Exp_Quadbike_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Syndikat
            I_C_Quadbike_01_F,

            // Gendarmerie
            B_GEN_Quadbike_01_F,

            // CSAT (African)
            O_A_Quadbike_01_F,

            // NATO (Woodland)
            B_W_Quadbike_01_F,

            // Russia,
            O_R_Quadbike_01_F,

            // NATO (British)
            B_A_Quadbike_01_F,
            B_A_Quadbike_01_tna_F,
            B_A_Quadbike_01_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};