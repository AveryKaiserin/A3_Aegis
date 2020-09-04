class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_LSV_02
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_LSV_02_armed_F,
            O_W_LSV_02_AT_F,
            O_W_LSV_02_unarmed_F,

            // CSAT (Caspian)
            O_C_LSV_02_armed_F,
            O_C_LSV_02_AT_F,
            O_C_LSV_02_unarmed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};