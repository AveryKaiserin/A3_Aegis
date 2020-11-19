class CfgPatches
{
	class A3_Wip_Armor_F_Wip_APC_Wheeled_04
	{
		addonRootClass = A3_Wip_Armor_F_Wip;
		requiredAddons[] = {A3_Wip_Armor_F_Wip};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRUS.hpp" */
            O_R_APC_Wheeled_04_cannon_F,
            O_R_APC_Wheeled_04_cannon_v2_F,
            O_R_APC_Wheeled_04_cannon_ard_F,
            O_R_APC_Wheeled_04_cannon_v2_ard_F
        };
		weapons[] = {/* Automated */};
	};
};