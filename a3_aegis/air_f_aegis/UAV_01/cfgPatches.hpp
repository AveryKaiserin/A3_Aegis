class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_UAV_01_F,

            // China
            O_T_UAV_01_F,

            // US (Woodland)
            B_W_UAV_01_F,

            // Russia
            O_R_UAV_01_ard_F,
            O_R_UAV_01_F,
            O_R_UAV_01_backpack_F,

            // BAF
            B_A_UAV_01_F,
            B_A_UAV_01_tna_F,
            B_A_UAV_01_wdl_F,

            // ION
            B_ION_UAV_01_F,
            B_ION_UAV_01_backpack_F
        };
		weapons[] = {/* Automated */};
	};
};