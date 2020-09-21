class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_02
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Wheeled_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (African)
            O_A_APC_Wheeled_02_rcws_v2_F,

            // Russia
            O_R_APC_Wheeled_02_rcws_v2_ard_F,
            O_R_APC_Wheeled_02_rcws_v2_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};