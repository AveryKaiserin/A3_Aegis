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
            Aegis_I_C_Quadbike_01_F,

            // Gendarmerie
            Aegis_B_GEN_Quadbike_01_F,

            // CSAT (African)
            Aegis_O_A_Quadbike_01_F,

            // NATO (Woodland)
            Aegis_B_W_Quadbike_01_F,

            // Russia,
            Aegis_O_R_Quadbike_01_F,

            // NATO (British)
            Aegis_B_A_Quadbike_01_F,
            Aegis_B_A_Quadbike_01_tna_F,
            Aegis_B_A_Quadbike_01_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};