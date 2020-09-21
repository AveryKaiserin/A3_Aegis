class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_MRAP_03
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_MRAP_03,
			A3_Atlas_Soft_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (German)
            B_E_MRAP_03_F,
            B_E_MRAP_03_gmg_F,
            B_E_MRAP_03_hmg_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};