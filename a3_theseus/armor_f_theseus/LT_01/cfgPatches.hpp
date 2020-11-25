class CfgPatches
{
	class A3_Theseus_Armor_F_Theseus_LT_01
	{
		addonRootClass = A3_Theseus_Armor_F_Theseus;
		requiredAddons[] = {A3_Theseus_Armor_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_LT_01_AA_F,
            Theseus_B_N_LT_01_AT_F,
            Theseus_B_N_LT_01_cannon_F,
            Theseus_B_N_LT_01_scout_F
        };
		weapons[] = {/* Automated */};
	};
};