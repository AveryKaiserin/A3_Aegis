class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_MBT_03
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgGER.hpp" */
            Atlas_B_G_MBT_03_cannon_F,
            Atlas_B_G_MBT_03_cannon_ard_F
        };
		weapons[] = {/* Automated */};
	};
};