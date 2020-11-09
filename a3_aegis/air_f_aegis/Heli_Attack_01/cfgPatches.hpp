class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Attack_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Beta_Heli_Attack_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_Heli_Attack_01_dynamicLoadout_F,

            // US (Woodland)
            B_W_Heli_Attack_01_dynamicLoadout_F,

            // BAF
            B_A_Heli_Attack_01_dynamicLoadout_F,
            B_A_Heli_Attack_01_dynamicLoadout_tna_F,
            B_A_Heli_Attack_01_dynamicLoadout_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};