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
            Aegis_O_T_Heli_Attack_02_dynamicLoadout_F,

            // Argana
            Aegis_O_A_Heli_Attack_02_dynamicLoadout_F,
            
            // Russia
            Aegis_O_R_Heli_Attack_02_dynamicLoadout_ard_F,
            Aegis_O_R_Heli_Attack_02_dynamicLoadout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};