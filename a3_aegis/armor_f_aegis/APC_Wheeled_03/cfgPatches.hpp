class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_03
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Gamma_APC_Wheeled_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            // FIA
            B_G_APC_Wheeled_03_cannon_F,
            I_G_APC_Wheeled_03_cannon_F,
            O_G_APC_Wheeled_03_cannon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};