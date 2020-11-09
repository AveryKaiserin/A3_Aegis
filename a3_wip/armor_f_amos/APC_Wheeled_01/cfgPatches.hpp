class CfgPatches
{
	class A3_Wip_Armor_F_Wip_APC_Wheeled_01
	{
		addonRootClass = A3_Wip_Armor_F_Wip;
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
            B_APC_Wheeled_01_amos_F,

            // US (Pacific)
            B_T_APC_Wheeled_01_amos_F,

            // US (Woodland)
            B_W_APC_Wheeled_01_amos_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};