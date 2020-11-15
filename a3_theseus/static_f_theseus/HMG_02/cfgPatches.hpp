class CfgPatches
{
	class A3_Theseus_Static_F_Theseus_HMG_02
	{
		addonRootClass = A3_Theseus_Static_F_Theseus;
		requiredAddons[] =
		{
			A3_Theseus_Static_F_Theseus,
			A3_Static_F_HMG_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            Theseus_B_N_HMG_02_F,
            Theseus_B_N_HMG_02_high_F
        };
		weapons[] = {/* Automated */};
	};
};