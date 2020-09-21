class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (Pacific)
            B_T_UAV_02_dynamicLoadout_F,

            // NATO (Woodland)
            B_W_UAV_02_dynamicLoadout_F,

            // Russia
            O_R_UAV_02_dynamicLoadout_ard_F,
            O_R_UAV_02_dynamicLoadout_F,

            // NATO (British)
            B_A_UAV_02_dynamicLoadout_F,
            B_A_UAV_02_dynamicLoadout_tna_F,
            B_A_UAV_02_dynamicLoadout_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};