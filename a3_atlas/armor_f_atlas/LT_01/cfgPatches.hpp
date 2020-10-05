class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_LT_01
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] =
		{
			A3_Armor_F_Tank_LT_01,
			A3_Atlas_Armor_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Germany
            Atlas_B_G_LT_01_AA_F,
            Atlas_B_G_LT_01_AT_F,
            Atlas_B_G_LT_01_cannon_F,
            Atlas_B_G_LT_01_scout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};