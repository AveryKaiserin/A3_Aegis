class CfgPatches
{
	class A3_WIP_Soft_F_WIP_SUV_02
	{
		addonRootClass = A3_WIP_Soft_F_WIP;
		requiredAddons[] =
		{
			A3_WIP_Soft_F_WIP
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