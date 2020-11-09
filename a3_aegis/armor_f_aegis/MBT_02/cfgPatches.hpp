class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_MBT_02
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Gamma_MBT_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (African)
            O_A_MBT_02_cannon_F,

            // Russia
            O_R_MBT_02_arty_ard_F,
            O_R_MBT_02_arty_F,
            O_R_MBT_02_cannon_ard_F,
            O_R_MBT_02_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};