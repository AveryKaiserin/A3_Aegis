class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Exp_UAV_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US
            B_UAV_03_dynamicLoadout_F,

            // US (Woodland)
            B_W_UAV_03_dynamicLoadout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};