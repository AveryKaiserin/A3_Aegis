class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Wheeled_01,
			A3_Armor_F_Exp_APC_Wheeled_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US
            B_APC_Wheeled_01_cannon_v2_F,
            B_APC_Wheeled_01_medical_F,

            // US (Pacific)
            B_T_APC_Wheeled_01_cannon_v2_F,
            B_T_APC_Wheeled_01_medical_F,

            // US (Woodland)
            B_W_APC_Wheeled_01_cannon_v2_F,
            B_W_APC_Wheeled_01_medical_F,

            // LDF
            I_E_APC_Wheeled_01_cannon_v3_F,
            I_E_APC_Wheeled_01_medical_F,

            // BAF
            B_A_APC_Wheeled_01_cannon_v3_F,
            B_A_APC_Wheeled_01_cannon_v3_tna_F,
            B_A_APC_Wheeled_01_cannon_v3_wdl_F,
            B_A_APC_Wheeled_01_medical_F,
            B_A_APC_Wheeled_01_medical_tna_F,
            B_A_APC_Wheeled_01_medical_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};