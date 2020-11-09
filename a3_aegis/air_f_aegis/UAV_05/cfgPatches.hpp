class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_05
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Jets_UAV_05
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_UAV_05_F,

            // US (Woodland)
            B_W_UAV_05_F
        };
		weapons[] = {/* Automated */};
	};
};