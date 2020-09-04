class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_MRAP_02
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_MRAP_02_F,
            O_W_MRAP_02_gmg_F,
            O_W_MRAP_02_hmg_F,

            // CSAT (Caspian)
            O_C_MRAP_02_F,
            O_C_MRAP_02_gmg_F,
            O_C_MRAP_02_hmg_F,

            // CDF
            I_W_MRAP_02_F,
            I_W_MRAP_02_gmg_F,
            I_W_MRAP_02_hmg_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};