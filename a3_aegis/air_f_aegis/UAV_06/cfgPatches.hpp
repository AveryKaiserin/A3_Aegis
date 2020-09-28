class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_06
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Orange_UAV_06,
			A3_Supplies_F_Orange_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_UAV_06_F,
            B_T_UAV_06_medical_F,
            Box_B_T_UAV_06_F,
            Box_B_T_UAV_06_medical_F,

            // China
            O_T_UAV_06_F,
            O_T_UAV_06_medical_F,
            Box_O_T_UAV_06_F,
            Box_O_T_UAV_06_medical_F,

            // US (Woodland)
            B_W_UAV_06_F,
            B_W_UAV_06_medical_F,

            // Russia
            O_R_UAV_06_ard_F,
            O_R_UAV_06_backpack_F,
            O_R_UAV_06_F,
            O_R_UAV_06_medical_ard_F,
            O_R_UAV_06_medical_backpack_F,
            O_R_UAV_06_medical_F,
            Box_O_R_UAV_06_F,
            Box_O_R_UAV_06_medical_F,

            // BAF
            B_A_UAV_06_F,
            B_A_UAV_06_medical_F,
            B_A_UAV_06_medical_tna_F,
            B_A_UAV_06_medical_wdl_F,
            B_A_UAV_06_tna_F,
            B_A_UAV_06_wdl_F,

            // ION
            B_ION_UAV_06_backpack_F,
            B_ION_UAV_06_F,
            B_ION_UAV_06_medical_backpack_F,
            B_ION_UAV_06_medical_F,
            Box_B_ION_UAV_06_F,
            Box_B_ION_UAV_06_medical_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};