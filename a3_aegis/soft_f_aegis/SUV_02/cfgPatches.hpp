class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_SUV_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgION.hpp" */
            DEGA_GunArmoredSUV_PMC,
            DEGA_ArmoredSUV_PMC
        };
		weapons[] = {/* Automated */};
	};
};