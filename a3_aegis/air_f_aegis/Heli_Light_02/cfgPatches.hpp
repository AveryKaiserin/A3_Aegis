class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Light_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Light_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Civilians
            C_Heli_Light_02_civil_F,

            // CSAT (Pacific)
            O_T_Heli_Light_02_dynamicLoadout_ghex_F,
            O_T_Heli_Light_02_unarmed_F,

            // CSAT (African)
            O_A_Heli_Light_02_dynamicLoadout_F,
            O_A_Heli_Light_02_unarmed_F,

            // Russia
            O_R_Heli_Light_02_dynamicLoadout_ard_F,
            O_R_Heli_Light_02_dynamicLoadout_F,
            O_R_Heli_Light_02_unarmed_ard_F,
            O_R_Heli_Light_02_unarmed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};