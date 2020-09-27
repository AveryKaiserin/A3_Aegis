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
            Aegis_B_T_Heli_Attack_01_dynamicLoadout_F,

            // US (Woodland)
            Aegis_B_W_Heli_Attack_01_dynamicLoadout_F,

            // BAF
            Aegis_B_B_Heli_Attack_01_dynamicLoadout_F,
            Aegis_B_B_Heli_Attack_01_dynamicLoadout_tna_F,
            Aegis_B_B_Heli_Attack_01_dynamicLoadout_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};