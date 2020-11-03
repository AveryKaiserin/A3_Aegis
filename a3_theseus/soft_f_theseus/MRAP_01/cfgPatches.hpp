class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_MRAP_01
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] =
		{
			A3_Theseus_Soft_F_Theseus,
			A3_Soft_F_MRAP_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NAAF
            Theseus_B_N_MRAP_01_F,
            Theseus_B_N_MRAP_01_gmg_F,
            Theseus_B_N_MRAP_01_hmg_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};