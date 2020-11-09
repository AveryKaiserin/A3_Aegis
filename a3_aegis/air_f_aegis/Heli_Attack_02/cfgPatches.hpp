class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Attack_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Beta_Heli_Attack_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // China
            O_T_Heli_Attack_02_dynamicLoadout_F,

            // Argana
            O_A_Heli_Attack_02_dynamicLoadout_F,
            
            // Russia
            O_R_Heli_Attack_02_dynamicLoadout_ard_F,
            O_R_Heli_Attack_02_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};