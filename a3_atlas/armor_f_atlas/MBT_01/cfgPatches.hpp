class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_MBT_01
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            B_L_MBT_01_cannon_F,
            B_L_MBT_01_TUSK_F,

            // IDF
            I_I_MBT_01_arty_F,
            I_I_MBT_01_cannon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};