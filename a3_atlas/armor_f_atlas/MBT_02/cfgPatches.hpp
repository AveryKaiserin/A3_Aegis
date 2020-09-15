class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_MBT_02
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_MBT_02_cannon_ghex_F,

            // CSAT (Takistani)
            O_C_MBT_02_cannon_F,

            // CDF
            I_W_MBT_02_cannon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};