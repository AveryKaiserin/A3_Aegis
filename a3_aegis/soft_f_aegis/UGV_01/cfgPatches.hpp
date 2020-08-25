class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_UGV_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Drones_F_Soft_F_Gamma_UGV_01,
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_UGV_01,
			A3_Soft_F_Orange_UGV_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO
            B_UGV_01_medical_F,

            // AAF
            I_UGV_01_medical_F,

            // CSAT
            O_UGV_01_medical_F,

            // NATO (Pacific)
            B_T_UGV_01_medical_olive_F,

            // CSAT (Pacific)
            O_T_UGV_01_medical_ghex_F,

            // NATO (Woodland)
            B_W_UGV_01_F,
            B_W_UGV_01_medical_F,
            B_W_UGV_01_rcws_F,

            // Russia
            O_R_UGV_01_ard_F,
            O_R_UGV_01_F,
            O_R_UGV_01_rcws_ard_F,
            O_R_UGV_01_rcws_F,
            O_R_UGV_01_medical_ard_F,
            O_R_UGV_01_medical_F,

            // LDF
            I_E_UGV_01_medical_F,

            // NATO (British)
            B_A_UGV_01_F,
            B_A_UGV_01_rcws_F,
            B_A_UGV_01_rcws_tna_F,
            B_A_UGV_01_rcws_wdl_F,
            B_A_UGV_01_medical_F,
            B_A_UGV_01_medical_tna_F,
            B_A_UGV_01_medical_wdl_F,
            B_A_UGV_01_tna_F,
            B_A_UGV_01_wdl_F,

            // ION
            B_ION_UGV_01_F,
            B_ION_UGV_01_medical_F,
            B_ION_UGV_01_rcws_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};