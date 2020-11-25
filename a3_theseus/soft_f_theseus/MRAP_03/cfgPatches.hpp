class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_MRAP_03
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] = {A3_Theseus_Soft_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_MRAP_03_wdl_F,
            Theseus_B_N_MRAP_03_hmg_wdl_F,
            Theseus_B_N_MRAP_03_gmg_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};